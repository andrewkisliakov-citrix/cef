// Copyright (c) 2017 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=65f2da73259d7f1847c8b4cdfbd8c7298469fa5c$
//

#include "libcef_dll/ctocpp/download_image_callback_ctocpp.h"
#include "libcef_dll/cpptoc/image_cpptoc.h"

// VIRTUAL METHODS - Body may be edited by hand.

void CefDownloadImageCallbackCToCpp::OnDownloadImageFinished(
    const CefString& image_url,
    int http_status_code,
    CefRefPtr<CefImage> image) {
  cef_download_image_callback_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_download_image_finished))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: image_url; type: string_byref_const
  DCHECK(!image_url.empty());
  if (image_url.empty())
    return;
  // Unverified params: image

  // Execute
  _struct->on_download_image_finished(_struct, image_url.GetStruct(),
                                      http_status_code,
                                      CefImageCppToC::Wrap(image));
}

// CONSTRUCTOR - Do not edit by hand.

CefDownloadImageCallbackCToCpp::CefDownloadImageCallbackCToCpp() {}

template <>
cef_download_image_callback_t* CefCToCppRefCounted<
    CefDownloadImageCallbackCToCpp,
    CefDownloadImageCallback,
    cef_download_image_callback_t>::UnwrapDerived(CefWrapperType type,
                                                  CefDownloadImageCallback* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount
    CefCToCppRefCounted<CefDownloadImageCallbackCToCpp,
                        CefDownloadImageCallback,
                        cef_download_image_callback_t>::DebugObjCt = 0;
#endif

template <>
CefWrapperType
    CefCToCppRefCounted<CefDownloadImageCallbackCToCpp,
                        CefDownloadImageCallback,
                        cef_download_image_callback_t>::kWrapperType =
        WT_DOWNLOAD_IMAGE_CALLBACK;

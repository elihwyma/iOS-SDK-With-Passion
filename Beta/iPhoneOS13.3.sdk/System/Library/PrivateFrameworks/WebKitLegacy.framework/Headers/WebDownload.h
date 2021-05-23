/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <CFNetwork/NSURLDownload.h>

@class WebDownloadInternal;

@interface WebDownload : NSURLDownload

{
    WebDownloadInternal *_webInternal;
}

- (id)init;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (id)_initWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3;
- (void)_setRealDelegate:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEODataURLSessionTask.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface GEODataURLSessionDownloadTask : GEODataURLSessionTask

{
    NSURL *_downloadedFileURL;
}

- (id)downloadedFileURL;
- (void)didFinishDownloadingToURL:(id)arg1;
- (id)_createBackingTaskWithRequest:(id)arg1 session:(id)arg2;

@end

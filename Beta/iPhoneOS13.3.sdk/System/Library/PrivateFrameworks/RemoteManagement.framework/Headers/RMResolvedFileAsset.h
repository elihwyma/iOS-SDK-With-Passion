/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

#import <RemoteManagement/RMResolvedAsset.h>

@class NSURL;

@interface RMResolvedFileAsset : RMResolvedAsset

{
    NSURL *_downloadedURL;
}

@property (nonatomic, readonly) NSURL *downloadedURL;

- (id)initWithAsset:(id)arg1 downloadedURL:(id)arg2 error:(id)arg3;

@end

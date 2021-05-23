/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class AVURLAsset;

@interface _MPCURLAssetDownloadCompletionObserver : NSObject

{
    AVURLAsset *_asset;
    CDUnknownBlockType _completionHandler;
}

@property (weak, nonatomic, readonly) AVURLAsset *asset;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

- (void)dealloc;
- (id)initWithAsset:(id)arg1;
- (void)_downloadCompleteSuccessNotification:(id)arg1;
- (void)_downloadCompleteFailedNotification:(id)arg1;
- (void)_notifyCompletionHandlerWithSuccess:(_Bool)arg1 error:(id)arg2;

@end

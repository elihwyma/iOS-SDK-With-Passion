/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <AVFoundation/AVAsset.h>

@class NSValue;

@interface AVAsset (PhotosUICore)

@property (nonatomic, readonly) NSValue *px_cachedDuration;
@property (nonatomic, readonly) CDStruct_1b6d18a9 px_duration;

- (void)px_loadDurationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_px_setCachedDuration:(id)arg1;

@end

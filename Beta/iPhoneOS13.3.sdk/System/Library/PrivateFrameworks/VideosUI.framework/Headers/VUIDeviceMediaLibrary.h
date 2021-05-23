/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIMediaLibrary.h>

@interface VUIDeviceMediaLibrary : VUIMediaLibrary

@property (nonatomic, readonly, getter=isUpdating) _Bool updating;
@property (nonatomic, readonly, getter=isInitialUpdateInProgress) _Bool initialUpdateInProgress;

- (void)updateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateFromCloudWithReason:(long long)arg1;

@end

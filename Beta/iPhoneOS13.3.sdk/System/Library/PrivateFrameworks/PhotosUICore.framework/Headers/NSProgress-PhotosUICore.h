/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSProgress.h>

@interface NSProgress (PhotosUICore)

- (void)px_appendSimulatedProgressWithDuration:(double)arg1 pendingUnitCount:(short)arg2;
- (void)px_appendChild:(id)arg1 withPendingUnitCount:(long long)arg2;
- (void)_px_performSimulatedWorkStep:(long long)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMFocusLockWithLensPositionCommand : CAMCaptureCommand

{
    float __lensPosition;
    CDUnknownBlockType __completionBlock;
}

@property (nonatomic, setter=_setLensPosition:) float _lensPosition;
@property (copy, nonatomic, setter=_setCompletionBlock:) CDUnknownBlockType _completionBlock;

+ (float)currentLensPositionSentinel;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithLensPosition:(float)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMQueryVideoDimensionsCommand : CAMCaptureCommand

{
    CDUnknownBlockType __completionBlock;
}

@property (copy, nonatomic, setter=_setCompletionBlock:) CDUnknownBlockType _completionBlock;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)executeWithContext:(id)arg1;

@end

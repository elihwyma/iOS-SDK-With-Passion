/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDContentAnimation.h>

@interface TSDContinuousContentPathAnimation : TSDContentAnimation

{
    CDUnknownBlockType _tick;
    CDUnknownBlockType _isFinished;
}

@property (copy, nonatomic) CDUnknownBlockType tick;
@property (copy, nonatomic) CDUnknownBlockType isFinished;

- (void)dealloc;
- (void)i_applyToLayer:(id)arg1 withTransformBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

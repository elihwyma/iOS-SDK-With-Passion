/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/FxPinParameter.h>

@interface FxParameterAngle : FxPinParameter

{
    struct FxParameterAnglePriv *_anglePriv;
}

- (id)init;
- (void)dealloc;
- (void)setStartValue:(double)arg1;
- (void)setStepValue:(double)arg1;
- (double)stepValue;
- (double)startValue;
- (_Bool)isClockwise;
- (void)setIsClockwise:(_Bool)arg1;

@end

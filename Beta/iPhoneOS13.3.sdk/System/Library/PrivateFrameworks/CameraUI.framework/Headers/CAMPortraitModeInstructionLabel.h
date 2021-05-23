/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMInstructionLabel.h>

@interface CAMPortraitModeInstructionLabel : CAMInstructionLabel

{
    long long _shallowDepthOfFieldStatus;
    long long _flashMode;
    unsigned long long _numberOfPeopleFound;
    long long _devicePosition;
    long long _lightingType;
}

@property (nonatomic) long long shallowDepthOfFieldStatus;
@property (nonatomic) long long flashMode;
@property (nonatomic) unsigned long long numberOfPeopleFound;
@property (nonatomic) long long devicePosition;
@property (nonatomic) long long lightingType;

+ (_Bool)shouldDisplayInstructionForShallowDepthOfFieldStatus:(long long)arg1;
+ (id)_textForShallowDepthOfFieldStatus:(long long)arg1 numberOfPeopleFound:(unsigned long long)arg2 flashMode:(long long)arg3 devicePosition:(long long)arg4 lightingType:(long long)arg5;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateTextWithPriorStatus:(long long)arg1;

@end

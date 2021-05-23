/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMInstructionLabel.h>

@class NSArray;

@interface CAMQRCodeInstructionLabel : CAMInstructionLabel

{
    long long _devicePosition;
    NSArray *_mrcResults;
}

@property (nonatomic) long long devicePosition;
@property (retain, nonatomic, setter=setMRCResults:) NSArray *mrcResults;

+ (_Bool)shouldDisplayInstructionForMRCResults:(id)arg1 devicePosition:(long long)arg2;
+ (id)_textForMRCResults:(id)arg1 devicePosition:(long long)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateTextWithPriorMRCResults:(id)arg1;

@end

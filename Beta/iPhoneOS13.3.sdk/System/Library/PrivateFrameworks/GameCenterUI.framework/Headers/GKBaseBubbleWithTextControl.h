/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKBubbleControl.h>

@class NSArray;

@interface GKBaseBubbleWithTextControl : GKBubbleControl

{
    double _referenceZPosition;
    NSArray *_labels;
    id _updateRasterizationScaleToken;
}

@property (retain, nonatomic) NSArray *labels;
@property (retain, nonatomic) id updateRasterizationScaleToken;
@property (nonatomic) double referenceZPosition;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isFlipped;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didMoveToSuperview;
- (void)updateLabelRasterizationScaleForLabels;
- (void)updateTextFieldsFor3DScaling;
- (id)_scaledTextStyle:(id)arg1;

@end

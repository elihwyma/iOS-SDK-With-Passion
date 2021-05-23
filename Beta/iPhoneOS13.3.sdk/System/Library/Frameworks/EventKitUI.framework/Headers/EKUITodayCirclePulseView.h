/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class NSDictionary, NSString, TodayCirclePulseBackground, UIFont, UILabel;

@interface EKUITodayCirclePulseView : UIView

{
    UIView *_backgroundContainer;
    TodayCirclePulseBackground *_background;
    UILabel *_label;
    UILabel *_overlayLabel;
    NSDictionary *_attributes;
    NSDictionary *_overlayAttributes;
    _Bool _usesTextYOffsetWithoutAdjustmentForOverlay;
    _Bool _circleShouldFillFrame;
    _Bool _dontApplyCenteringOffset;
    double _circleDiameter;
    double _textYOffset;
    double _textFrameWidthAdjustment;
    struct CGPoint _textOffsetFromCircle;
}

@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSString *overlayString;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIFont *overlayFont;
@property (retain, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) NSDictionary *overlayAttributes;
@property (nonatomic) double circleDiameter;
@property (nonatomic) double textYOffset;
@property (nonatomic) struct CGPoint textOffsetFromCircle;
@property (nonatomic) _Bool usesTextYOffsetWithoutAdjustmentForOverlay;
@property (nonatomic) _Bool circleShouldFillFrame;
@property (nonatomic) _Bool dontApplyCenteringOffset;
@property (nonatomic) double textFrameWidthAdjustment;
@property (nonatomic) _Bool usesRoundedRectInsteadOfCircle;
@property (nonatomic) double roundedRectCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_layoutSubviews;
- (void)_updateLabelAttributedString;
- (id)_overlayLabel;
- (void)_updateOverlayLabelAttributedString;
- (void)pulse:(CDUnknownBlockType)arg1;

@end

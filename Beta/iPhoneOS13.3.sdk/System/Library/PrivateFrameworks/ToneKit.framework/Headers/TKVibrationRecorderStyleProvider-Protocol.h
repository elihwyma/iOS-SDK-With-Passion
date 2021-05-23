/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <ToneKit/Swift-Protocol.h>

@class UIColor, UIFont, UIImage, UIScreen;

@protocol TKVibrationRecorderStyleProvider <Swift>

@property (nonatomic, readonly) UIColor *vibrationRecorderBarsBackgroundColor;
@property (retain, nonatomic) UIScreen *screen;
@property (nonatomic, readonly) UIFont *vibrationRecorderInstructionsLabelFont;
@property (nonatomic, readonly) UIColor *vibrationRecorderInstructionsLabelTextColor;
@property (nonatomic, readonly) UIColor *vibrationRecorderInstructionsLabelBackgroundColor;
@property (nonatomic, readonly) struct UIOffset vibrationRecorderInstructionsLabelPositionOffset;
@property (nonatomic, readonly) struct UIEdgeInsets vibrationRecorderInstructionsLabelEdgeInsets;
@property (nonatomic, readonly) double vibrationRecorderInstructionsLabelFadeAnimationDuration;
@property (nonatomic, readonly) double vibrationRecorderControlsToolbarVerticalOffset;
@property (nonatomic, readonly) double vibrationRecorderControlsToolbarAdditionalHeight;
@property (nonatomic, readonly) double vibrationRecorderControlsToolbarItemsHorizontalOffsetFromEdge;
@property (nonatomic, readonly) double vibrationRecorderProgressToolbarVerticalOffset;
@property (nonatomic, readonly) double vibrationRecorderProgressToolbarAdditionalHeight;
@property (nonatomic, readonly) double vibrationRecorderProgressViewHorizontalOffsetFromEdge;
@property (nonatomic, readonly) double vibrationRecorderProgressViewHeight;
@property (nonatomic, readonly) UIColor *vibrationRecorderProgressViewTrackColor;
@property (nonatomic, readonly) double vibrationRecorderProgressViewDotHorizontalInset;
@property (nonatomic, readonly) UIColor *vibrationRecorderProgressViewDotTintColor;
@property (nonatomic, readonly) UIImage *vibrationRecorderProgressViewResizableDotImage;
@property (nonatomic, readonly) double vibrationRecorderProgressViewAccessibilityAdditionalHeight;
@property (nonatomic, readonly) UIColor *vibrationRecorderRippleViewBackgroundColor;
@property (nonatomic, readonly) double vibrationRecorderRippleRingLineWidth;
@property (nonatomic, readonly) double vibrationRecorderRippleInitialRadius;
@property (nonatomic, readonly) double vibrationRecorderRippleFinalRadius;
@property (nonatomic, readonly) double vibrationRecorderRippleFingerStillSpeed;
@property (nonatomic, readonly) double vibrationRecorderRippleFingerMovingSpeed;

@end

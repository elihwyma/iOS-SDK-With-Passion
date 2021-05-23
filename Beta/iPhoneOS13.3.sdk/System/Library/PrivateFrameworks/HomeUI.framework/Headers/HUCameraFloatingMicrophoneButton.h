/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIButton.h>

@class NAUILayoutConstraintSet, UIImageView, UILabel, UIVisualEffectView;

@interface HUCameraFloatingMicrophoneButton : UIButton

{
    UIVisualEffectView *_backgroundView;
    UILabel *_microphoneLabel;
    UIImageView *_microphoneImageView;
    NAUILayoutConstraintSet *_constraintSet;
}

@property (nonatomic, readonly) UIVisualEffectView *backgroundView;
@property (nonatomic, readonly) UILabel *microphoneLabel;
@property (nonatomic, readonly) UIImageView *microphoneImageView;
@property (nonatomic, readonly) NAUILayoutConstraintSet *constraintSet;

+ (_Bool)requiresConstraintBasedLayout;
+ (id)_createBackgroundEffect;

- (void)setEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateConstraints;
- (void)setSelected:(_Bool)arg1;
- (void)_updateAlpha;
- (void)_setupConstraintSet;
- (void)_updateSelectionState;

@end

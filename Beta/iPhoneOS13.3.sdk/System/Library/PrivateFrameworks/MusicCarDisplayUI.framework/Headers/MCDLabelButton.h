/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <MusicCarDisplayUI/MCDButton.h>

@class UIColor;

@interface MCDLabelButton : MCDButton

{
    UIColor *_disabledTextColor;
}

@property (retain, nonatomic) UIColor *disabledTextColor;

- (void)setEnabled:(_Bool)arg1;
- (id)tintColor;
- (id)colorForKnobFocusLayer;
- (void)updateButtonOpacityForKnobUnfocused;

@end

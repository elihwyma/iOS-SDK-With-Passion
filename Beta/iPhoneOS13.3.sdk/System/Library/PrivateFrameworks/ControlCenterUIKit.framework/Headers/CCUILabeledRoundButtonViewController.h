/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <UIKit/UIViewController.h>

@class CCUICAPackageDescription, CCUILabeledRoundButton, NSString, UIColor, UIControl, UIImage;

@interface CCUILabeledRoundButtonViewController : UIViewController

{
    _Bool _labelsVisible;
    _Bool _toggleStateOnTap;
    _Bool _useAlternateBackground;
    _Bool _enabled;
    _Bool _inoperative;
    _Bool _useLightStyle;
    NSString *_subtitle;
    CCUICAPackageDescription *_glyphPackageDescription;
    NSString *_glyphState;
    UIImage *_glyphImage;
    UIColor *_highlightColor;
    CCUILabeledRoundButton *_buttonContainer;
    UIControl *_button;
}

@property (retain, nonatomic) UIColor *highlightColor;
@property (nonatomic) _Bool useLightStyle;
@property (retain, nonatomic) CCUILabeledRoundButton *buttonContainer;
@property (retain, nonatomic) UIControl *button;
@property (retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription;
@property (copy, nonatomic) NSString *glyphState;
@property (retain, nonatomic) UIImage *glyphImage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) _Bool labelsVisible;
@property (nonatomic) _Bool toggleStateOnTap;
@property (nonatomic) _Bool useAlternateBackground;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, getter=isInoperative) _Bool inoperative;

- (void)loadView;
- (_Bool)_canShowWhileLocked;
- (void)buttonTapped:(id)arg1;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 useLightStyle:(_Bool)arg3;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 useLightStyle:(_Bool)arg3;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2;

@end

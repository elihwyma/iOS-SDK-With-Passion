/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class NSString, UIButton, UIColor, UIImage, UILabel;

@protocol CNStarkActionViewDelegate;

__attribute__((visibility("hidden")))
@interface CNStarkActionView : UIView

{
    _Bool _enabled;
    _Bool _selected;
    _Bool _disabledButtonFocused;
    NSString *_actionType;
    NSString *_title;
    id <CNStarkActionViewDelegate> _delegate;
    double _actionPlatterSize;
    double _actionLabelOffset;
    double _actionBorderWidth;
    UIColor *_disabledStrokeColor;
    UIColor *_disabledFillColor;
    UIColor *_disabledGlyphColor;
    UIColor *_enabledStrokeColor;
    UIColor *_enabledFillColor;
    UIColor *_enabledGlyphColor;
    UIColor *_selectedStrokeColor;
    UIColor *_selectedFillColor;
    UIColor *_selectedGlyphColor;
    UIImage *_image;
    UIButton *_button;
    UILabel *_label;
}

@property (nonatomic) double actionPlatterSize;
@property (nonatomic) double actionLabelOffset;
@property (nonatomic) double actionBorderWidth;
@property (retain, nonatomic) UIColor *disabledStrokeColor;
@property (retain, nonatomic) UIColor *disabledFillColor;
@property (retain, nonatomic) UIColor *disabledGlyphColor;
@property (retain, nonatomic) UIColor *enabledStrokeColor;
@property (retain, nonatomic) UIColor *enabledFillColor;
@property (retain, nonatomic) UIColor *enabledGlyphColor;
@property (retain, nonatomic) UIColor *selectedStrokeColor;
@property (retain, nonatomic) UIColor *selectedFillColor;
@property (retain, nonatomic) UIColor *selectedGlyphColor;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, readonly) UIButton *button;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic) _Bool selected;
@property (nonatomic) _Bool disabledButtonFocused;
@property (retain, nonatomic) NSString *actionType;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) _Bool enabled;
@property (weak, nonatomic, readonly) id <CNStarkActionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)quickActionButtonWithDelegate:(id)arg1;
+ (id)propertyTransportButtonWithDelegate:(id)arg1;

- (void)select;
- (id)initWithDelegate:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)setupConstraints;
- (void)actionViewTapped:(id)arg1;
- (void)setupLabel;
- (void)setupButton;
- (void)setupClickGestureRecognizer;
- (void)actionViewTouchDown:(id)arg1;
- (void)actionViewTouchUp:(id)arg1;
- (void)clickGestureDidUpdate:(id)arg1;
- (void)deselect;
- (void)choose;
- (void)notifyDelegateAboutUserChoice;
- (void)updateForFocusedState:(_Bool)arg1;
- (void)stateUpdated;

@end

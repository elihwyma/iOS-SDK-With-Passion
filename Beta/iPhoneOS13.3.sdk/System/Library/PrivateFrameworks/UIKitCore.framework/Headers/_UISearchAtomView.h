/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, UIColor, UIFont, UIImageView, UILabel, _UISearchAtomBackgroundView;

__attribute__((visibility("hidden")))
@interface _UISearchAtomView : UIView

{
    struct {
        unsigned int enabled:1;
    } _flags;
    UIColor *_atomBackgroundColor;
    UILabel *_textLabel;
    UIImageView *_leadingImage;
    _UISearchAtomBackgroundView *_backgroundView;
    NSArray *_defaultConstraints;
    NSLayoutConstraint *_imageBaselineConstraint;
    NSLayoutConstraint *_imageCenterYConstraint;
    NSArray *_withImageConstraints;
    NSArray *_withoutImageConstraints;
}

@property (retain, nonatomic) _UISearchAtomBackgroundView *backgroundView;
@property (copy, nonatomic) NSArray *defaultConstraints;
@property (retain, nonatomic) NSLayoutConstraint *imageBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageCenterYConstraint;
@property (copy, nonatomic) NSArray *withImageConstraints;
@property (copy, nonatomic) NSArray *withoutImageConstraints;
@property (retain) UILabel *textLabel;
@property (retain) UIImageView *leadingImage;
@property (retain, nonatomic) UIColor *atomBackgroundColor;
@property (retain, nonatomic) UIFont *atomFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) long long selectionStyle;
@property (nonatomic, readonly) struct CGRect selectionBounds;
@property (nonatomic, readonly) long long baseWritingDirection;

+ (_Bool)requiresConstraintBasedLayout;
+ (id)defaultAtomBackgroundColor;

- (id)_font;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)tintColorDidChange;
- (id)viewForLastBaselineLayout;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setSelectionStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateColors;
- (double)_topToBaselineDelta;
- (double)_bottomMargin;

@end

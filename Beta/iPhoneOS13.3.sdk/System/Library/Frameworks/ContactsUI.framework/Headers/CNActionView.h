/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, UIFont, UIImage, UIImageView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer;

@protocol CNActionViewDelegate;

@interface CNActionView : UIView

{
    _Bool _disabled;
    _Bool _highlighted;
    id <CNActionViewDelegate> _actionDelegate;
    UIImage *_image;
    NSString *_title;
    NSString *_type;
    long long _style;
    UIView *_platterView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    NSArray *_activatedContstrants;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UILongPressGestureRecognizer *_highlightGestureRecognizer;
    UIFont *_titleFont;
}

@property (retain, nonatomic) UIView *platterView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSArray *activatedContstrants;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *highlightGestureRecognizer;
@property (retain, nonatomic) UIFont *titleFont;
@property (weak, nonatomic) id <CNActionViewDelegate> actionDelegate;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *type;
@property (nonatomic) long long style;
@property (nonatomic) _Bool disabled;
@property (nonatomic) _Bool highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultTitleFont;
+ (void)fadeInView:(id)arg1;
+ (id)contentColorForDisabledVibrantDarkState;
+ (id)contentColorForDisabledBoldState;
+ (id)borderColorForDisabledBoldState;
+ (id)colorByIncreasingBrightnessComponentByPercentage:(double)arg1 ofColor:(id)arg2;
+ (id)defaultTitleFontOfSize:(double)arg1;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)didMoveToWindow;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)handleLongPressGesture:(id)arg1;
- (id)colorByAdjustingColorToHighlightState:(id)arg1;
- (void)setDisabled:(_Bool)arg1 animated:(_Bool)arg2;
- (double)intrinsicContentWidth;
- (struct CGRect)rectForPlatterView;
- (struct CGRect)rectForTitleLabelForFont:(id)arg1 fittingSize:(struct CGSize)arg2;
- (void)updatePlatterViewStateAnimated:(_Bool)arg1;
- (void)updateImageViewStateAnimated:(_Bool)arg1;
- (void)updateLabelStateAnimated:(_Bool)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)handleHighlightGesture:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UIView.h>

@class UIColor;

@interface SiriUIKeyline : UIView

{
    UIView *_keyLineView;
    _Bool _veritical;
    long long _keylineType;
    double _customLeftPadding;
    double _customRightPadding;
    UIColor *_customBackgroundColor;
}

@property (nonatomic, getter=_isVeritical, setter=_setVertical:) _Bool veritical;
@property (nonatomic) long long keylineType;
@property (nonatomic) double customLeftPadding;
@property (nonatomic) double customRightPadding;
@property (retain, nonatomic) UIColor *customBackgroundColor;

+ (id)keyline;
+ (id)keylineWithKeylineType:(long long)arg1;
+ (id)verticalKeyline;
+ (id)keylineWithKeylineType:(long long)arg1 platterStyling:(_Bool)arg2;
+ (id)keylineWithDefaultInsets;
+ (id)keylineForSelectableRow;

- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithKeylineType:(long long)arg1;
- (id)initWithKeylineType:(long long)arg1 platterStyling:(_Bool)arg2;
- (id)_keylineColorForType:(long long)arg1 platterStyling:(_Bool)arg2;
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1 useAutolayout:(_Bool)arg2;
- (double)_keylineThicknessForType:(long long)arg1;

@end

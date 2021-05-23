/*
 Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

#import <UIView.h>

@class UIImageView, UILabel;

@interface CertUIKeyValueView : UIView

{
    double _preferredValueLabelOriginX;
    UILabel *_keyLabel;
    UILabel *_valueLabel;
    UIImageView *_verifiedImageView;
    UILabel *_verifiedLabel;
}

@property (retain, nonatomic) UILabel *keyLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UIImageView *verifiedImageView;
@property (retain, nonatomic) UILabel *verifiedLabel;
@property (nonatomic) double preferredValueLabelOriginX;

+ (double)defaultPreferredValueLabelOriginX;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)titleFont;
- (id)detailFont;
- (id)verifiedColor;
- (id)verifiedFont;
- (void)setKey:(id)arg1 value:(id)arg2;
- (void)setHighlightTextColor:(id)arg1;
- (void)setCheckmarkLabelText:(id)arg1 checkmarkLabelColor:(id)arg2 showCheckmark:(_Bool)arg3;
- (void)_createVerifiedComponentsIfNeeded;
- (void)setItemDetail:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UILabel.h>

@class UIImageView;

@interface CKLabel : UILabel

{
    UIImageView *_titleIconImageView;
    long long _titleIconImageType;
}

@property (retain, nonatomic) UIImageView *titleIconImageView;
@property (nonatomic) long long titleIconImageType;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)drawTextInRect:(struct CGRect)arg1;
- (_Bool)isLTR;
- (struct CGSize)sizeOfTitleLabel;
- (struct CGSize)sizeOfAccessoryImageView;
- (struct CGRect)rectToDrawTextInForRect:(struct CGRect)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIView.h>

@class UILabel;

@interface SUCreditCardReaderInfoView : UIView

{
    UILabel *_addCardDetailLabel;
    UILabel *_addCardLabel;
}

@property (retain, nonatomic) UILabel *addCardDetailLabel;
@property (retain, nonatomic) UILabel *addCardLabel;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

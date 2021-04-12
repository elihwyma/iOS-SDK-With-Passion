//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, PKContinuousButton, PKPaymentTransaction, UIImageView, UILabel;
@protocol PKTransactionDetailQuestionCellDelegate;

@interface PKTransactionDetailQuestionCell : UITableViewCell
{
    UILabel *_title;
    UILabel *_message;
    PKContinuousButton *_leadingButton;
    PKContinuousButton *_trailingButton;
    UIImageView *_imageView;
    BOOL _isTemplateLayout;
    PKPaymentTransaction *_transaction;
    NSString *_submittingAnswer;
    BOOL _smallDevice;
    id <PKTransactionDetailQuestionCellDelegate> _questionDelegate;
}

@property(nonatomic) __weak id <PKTransactionDetailQuestionCellDelegate> questionDelegate; // @synthesize questionDelegate=_questionDelegate;
// - (void).cxx_destruct;
- (void)_enableButtons:(BOOL)arg1;
- (void)_leadingButtonTapped:(id)arg1;
- (void)_trailingButtonTapped:(id)arg1;
- (void)setTransaction:(id)arg1 submittingAnswer:(id)arg2;
- (CGSize)_layoutWithBounds:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSArray, NSAttributedString, NSLayoutConstraint, NSString, UITextView;

@interface HUItemTableHeaderFooterView : UITableViewHeaderFooterView

{
    _Bool _includeBottomSpacing;
    UITextView *_messageTextView;
    NSArray *_constraints;
    NSLayoutConstraint *_bottomSpacingConstraint;
}

@property (retain, nonatomic) UITextView *messageTextView;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) NSLayoutConstraint *bottomSpacingConstraint;
@property (copy, nonatomic) NSAttributedString *attributedMessage;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) _Bool includeBottomSpacing;

+ (_Bool)requiresConstraintBasedLayout;

- (void)updateConstraints;
- (id)initWithReuseIdentifier:(id)arg1;
- (double)_bottomSpacing;

@end

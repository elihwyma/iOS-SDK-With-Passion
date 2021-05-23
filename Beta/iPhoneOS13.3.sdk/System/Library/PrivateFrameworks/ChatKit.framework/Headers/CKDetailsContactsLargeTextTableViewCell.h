/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKDetailsContactsTableViewCell.h>

@class NSLayoutConstraint, UIStackView;

@interface CKDetailsContactsLargeTextTableViewCell : CKDetailsContactsTableViewCell

{
    UIStackView *_buttonStackView;
    NSLayoutConstraint *_buttonsTopConstraint;
}

@property (retain, nonatomic) UIStackView *buttonStackView;
@property (retain, nonatomic) NSLayoutConstraint *buttonsTopConstraint;

+ (double)preferredHeight;
+ (double)estimatedHeight;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setShowsLocation:(_Bool)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)_initConstraints;
- (void)_updateVisibleButtons;

@end

/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <ContactsAutocompleteUI/CNComposeTableViewCell.h>

@class CNAvatarViewController, NSArray, NSString, UIButton;

@protocol CNComposeRecipientTableViewCellDelegate;

@interface CNComposeRecipientTableViewCell : CNComposeTableViewCell

{
    _Bool _shouldHighlightCompleteMatches;
    id <CNComposeRecipientTableViewCellDelegate> _delegate;
    UIButton *_actionButton;
    CNAvatarViewController *_avatarViewController;
    NSArray *_activeConstraints;
    unsigned long long _actionType;
}

@property (retain, nonatomic) UIButton *actionButton;
@property (nonatomic, readonly) CNAvatarViewController *avatarViewController;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (nonatomic) unsigned long long actionType;
@property (weak) id <CNComposeRecipientTableViewCellDelegate> delegate;
@property (nonatomic) _Bool shouldHighlightCompleteMatches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)identifier;
+ (double)additionalSeparatorInset;
+ (_Bool)avatarsAreHidden;
+ (id)attributedStringWithBoldedRangesForMatchedStrings:(id)arg1 inString:(id)arg2 font:(id)arg3 boldAllMatches:(_Bool)arg4;
+ (id)_attributedStringForListOfGroupMemberNames:(id)arg1 numberTruncated:(unsigned long long)arg2;
+ (id)_attributedStringForGroupMembersOfRecipient:(id)arg1 matchedStrings:(id)arg2 constrainedToWidth:(double)arg3 font:(id)arg4;
+ (id)_attributedTitleForRecipient:(id)arg1 matchedStrings:(id)arg2 constrainedToWidth:(double)arg3 font:(id)arg4;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setRecipient:(id)arg1;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (void)actionButtonTapped;
- (void)setActionType:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)applyActionButtonTouchInsets;
- (void)updateLabelsContrainedToWidth:(double)arg1;
- (void)labelsChangedWidth:(double)arg1;
- (double)trailingButtonWidth;

@end

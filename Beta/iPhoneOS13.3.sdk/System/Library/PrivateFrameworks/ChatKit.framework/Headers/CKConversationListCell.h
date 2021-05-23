/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UITableViewCell.h>

@class CKAvatarView, CKConversation, CKLabel, NSDate, NSObject, NSString, UIDateLabel, UIImageView, UILabel;

@protocol CKConversationListCellDelegate;

@interface CKConversationListCell : UITableViewCell

{
    UIDateLabel *_dateLabel;
    UILabel *_summaryLabel;
    UILabel *_summaryBlockedLabel;
    UIImageView *_chevronImageView;
    CKLabel *_fromLabel;
    _Bool _isPlaceholder;
    NSString *_searchSummaryText;
    NSString *_searchMessageGUID;
    NSDate *_searchMessageDate;
    _Bool _verified;
    _Bool _shouldHidePreviewSummary;
    NSObject<CKConversationListCellDelegate> *_delegate;
    CKConversation *_conversation;
}

@property (retain, nonatomic) NSDate *searchMessageDate;
@property (copy, nonatomic) NSString *searchMessageGUID;
@property (copy, nonatomic) NSString *searchSummaryText;
@property (nonatomic) _Bool verified;
@property (retain, nonatomic) CKConversation *conversation;
@property (nonatomic, readonly) CKAvatarView *avatarView;
@property (nonatomic, readonly) CKLabel *fromLabel;
@property (nonatomic) _Bool shouldHidePreviewSummary;
@property (weak, nonatomic) NSObject<CKConversationListCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)identifierForConversation:(id)arg1;
+ (double)cellHeight;

- (void)dealloc;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)updateWithSearchResult:(id)arg1;
- (void)updateContentsForConversation:(id)arg1;
- (unsigned long long)unreadMessageCount;
- (void)_increaseContrastDidChange:(id)arg1;
- (void)contentSizeCategoryDidChange;
- (void)increaseContrastDidChange;
- (void)updateContentsForConversation:(id)arg1 fastPreview:(_Bool)arg2;
- (void)updateUnreadIndicatorWithImage:(id)arg1 tintColor:(id)arg2;
- (void)updateFromLabelWithText:(id)arg1;
- (void)updateSummaryTextForConversation:(id)arg1 fastPreview:(_Bool)arg2;
- (id)_makeSummaryAttributedStringWithText:(id)arg1;
- (void)updateBlockedSummaryLabelIfNeeded;
- (_Bool)showingEditControl;
- (void)updateForEditing:(_Bool)arg1;
- (id)summaryAttributedTextForBlockedConversationWithIcon:(_Bool)arg1;

@end

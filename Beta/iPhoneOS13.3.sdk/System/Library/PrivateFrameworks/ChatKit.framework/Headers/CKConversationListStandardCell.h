/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKConversationListCell.h>

@class CKAvatarView, UIImageView;

@interface CKConversationListStandardCell : CKConversationListCell

{
    UIImageView *_unreadIndicatorImageView;
    CKAvatarView *_avatarView;
}

+ (id)identifierForConversation:(id)arg1;

- (void)dealloc;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (_Bool)avatarView:(id)arg1 shouldShowContact:(id)arg2;
- (id)contactsForPreviewInteractionForAvatarView:(id)arg1 suggestedKeysToFetch:(id)arg2;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (id)avatarView;
- (void)_updateAvatarView;
- (void)updateContentsForConversation:(id)arg1;
- (void)increaseContrastDidChange;
- (void)updateContentsForConversation:(id)arg1 fastPreview:(_Bool)arg2;
- (void)updateUnreadIndicatorWithImage:(id)arg1 tintColor:(id)arg2;
- (void)updateFromLabelWithText:(id)arg1;
- (void)updateForEditing:(_Bool)arg1;
- (id)chevronImageView;
- (double)leadingLayoutMargin;
- (void)_calculateLayoutFrames;
- (_Bool)_shouldShowAvatarForWidth:(double)arg1;

@end

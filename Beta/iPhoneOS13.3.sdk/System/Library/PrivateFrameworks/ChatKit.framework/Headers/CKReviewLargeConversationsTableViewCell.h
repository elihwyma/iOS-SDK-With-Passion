/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKAbstractReviewTableViewCell.h>

@class CNAvatarView, IMChat;

__attribute__((visibility("hidden")))
@interface CKReviewLargeConversationsTableViewCell : CKAbstractReviewTableViewCell

{
    IMChat *_chat;
    CNAvatarView *_avatarView;
}

@property (retain, nonatomic) IMChat *chat;
@property (retain, nonatomic) CNAvatarView *avatarView;

+ (double)requestedHeight;
+ (struct CGSize)leftHandSideViewSize;

- (void)prepareForReuse;
- (void)setModelObject:(id)arg1;
- (id)leftHandSideView;

@end

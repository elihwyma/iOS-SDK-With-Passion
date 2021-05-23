/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKTranscriptMessageCell.h>

@class CKAvatarView;

@interface CKPhoneTranscriptMessageCell : CKTranscriptMessageCell

{
    CKAvatarView *_avatarView;
}

@property (retain, nonatomic) CKAvatarView *avatarView;

- (void)dealloc;
- (id)contactImageView;
- (void)layoutSubviewsForContents;
- (void)setShowAvatarView:(_Bool)arg1 withContact:(id)arg2 preferredHandle:(id)arg3 avatarViewDelegate:(id)arg4;

@end

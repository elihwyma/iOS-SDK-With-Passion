/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKBalloonChatItem.h>

@class IMMessage, NSArray, UIItemProvider;

@interface CKMessagePartChatItem : CKBalloonChatItem

{
    NSArray *_visibleAssociatedMessageChatItems;
}

@property (copy, nonatomic, readonly) NSArray *messageAcknowledgments;
@property (nonatomic, readonly) IMMessage *message;
@property (nonatomic, readonly) BOOL color;
@property (copy, nonatomic, readonly) NSArray *pasteboardItems;
@property (nonatomic, readonly) NSArray *visibleAssociatedMessageChatItems;
@property (nonatomic, readonly) _Bool canSendMessageAcknowledgment;
@property (nonatomic, readonly) struct _NSRange messagePartRange;
@property (nonatomic, readonly) _Bool hasMessageAcknowledgment;
@property (nonatomic, readonly) _Bool hasStickers;
@property (nonatomic, readonly) _Bool isCorrupt;
@property (nonatomic, readonly) _Bool isBlackholed;
@property (nonatomic, readonly) UIItemProvider *dragItemProvider;

- (id)description;
- (id)time;
- (id)sender;
- (_Bool)failed;
- (_Bool)canCopy;
- (_Bool)isFromMe;
- (id)composition;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (void)configureBalloonView:(id)arg1;
- (_Bool)canSendAsTextMessage;
- (_Bool)shouldShowVotingView;
- (_Bool)canForward;
- (_Bool)canAttachStickers;
- (_Bool)stickersSnapToPoint;
- (id)votingCounts;
- (long long)selectedType;
- (id)aggregateAcknowledgmentChatItem;
- (_Bool)_isSURFRelatedMessage;

@end

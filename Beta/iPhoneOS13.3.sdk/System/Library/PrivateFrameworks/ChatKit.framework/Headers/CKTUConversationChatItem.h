/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKBalloonChatItem.h>

@class NSUUID;

@interface CKTUConversationChatItem : CKBalloonChatItem

@property (nonatomic, readonly) BOOL color;
@property (weak, nonatomic, readonly) NSUUID *tuConversationUUID;

- (id)time;
- (id)sender;
- (_Bool)isFromMe;
- (Class)balloonViewClass;
- (void)configureBalloonView:(id)arg1;
- (_Bool)shouldCacheSize;

@end

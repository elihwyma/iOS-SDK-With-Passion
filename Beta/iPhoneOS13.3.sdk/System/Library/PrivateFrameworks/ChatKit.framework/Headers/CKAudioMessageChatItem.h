/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKExpirableMessageChatItem.h>

@class CKAudioMediaObject;

@interface CKAudioMessageChatItem : CKExpirableMessageChatItem

@property (nonatomic, readonly) CKAudioMediaObject *mediaObject;

- (Class)cellClass;
- (Class)balloonViewClass;
- (unsigned long long)balloonCorners;

@end

/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKTextMessagePartChatItem.h>

@class NSArray, NSString;

@interface CKAggregateMessagePartChatItem : CKTextMessagePartChatItem

{
    NSArray *_subparts;
}

@property (copy, nonatomic) NSArray *subparts;
@property (copy, nonatomic, readonly) NSString *title;

- (id)composition;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (Class)balloonViewClass;
- (id)pasteboardItems;
- (id)loadTranscriptText;

@end

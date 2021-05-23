/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKAssociatedMessageChatItem.h>

@class CKMediaObject, NSString;

@interface CKAssociatedStickerChatItem : CKAssociatedMessageChatItem

{
    CKMediaObject *_mediaObject;
}

@property (retain, nonatomic) CKMediaObject *mediaObject;
@property (copy, nonatomic, readonly) NSString *transferGUID;

- (Class)cellClass;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (BOOL)transcriptOrientation;
- (id)IMAssociatedStickerChatItem;

@end

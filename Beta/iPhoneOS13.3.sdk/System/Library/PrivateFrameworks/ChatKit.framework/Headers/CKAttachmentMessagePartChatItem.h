/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKMessagePartChatItem.h>

@class CKMediaObject, NSString, UIItemProvider, UITraitCollection;

@interface CKAttachmentMessagePartChatItem : CKMessagePartChatItem

{
    UIItemProvider *_dragItemProvider;
    UITraitCollection *_transcriptTraitCollection;
    CKMediaObject *_mediaObject;
}

@property (retain, nonatomic) CKMediaObject *mediaObject;
@property (copy, nonatomic, readonly) NSString *transferGUID;

- (id)description;
- (_Bool)canCopy;
- (id)composition;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (id)transcriptTraitCollection;
- (Class)balloonViewClass;
- (id)pasteboardItems;
- (_Bool)canExport;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (unsigned long long)balloonCorners;
- (_Bool)canForward;
- (id)dragItemProvider;
- (void)setTranscriptTraitCollection:(id)arg1;
- (_Bool)stickersSnapToPoint;
- (_Bool)shouldCacheSize;
- (struct CGSize)_transcoderGeneratedSizeFittingSize:(struct CGSize)arg1 sizeExists:(_Bool *)arg2;

@end

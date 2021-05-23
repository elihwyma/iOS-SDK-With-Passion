/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKColoredBalloonView.h>

@class UIView;

@protocol CKAttachmentView;

@interface CKAttachmentBalloonView : CKColoredBalloonView

{
    UIView<CKAttachmentView> *_attachmentView;
}

@property (retain, nonatomic) UIView<CKAttachmentView> *attachmentView;

- (void)dealloc;
- (id)description;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)prepareForDisplay;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)setMediaObject:(id)arg1;
- (void)configureForComposition:(id)arg1;
- (void)transferUpdated:(id)arg1;
- (void)richIconDidChange:(id)arg1;
- (void)configureForMessagePart:(id)arg1;

@end

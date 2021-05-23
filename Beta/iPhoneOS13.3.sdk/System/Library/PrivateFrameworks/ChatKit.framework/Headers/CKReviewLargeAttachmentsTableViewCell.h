/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKAbstractReviewTableViewCell.h>

@class CKAttachmentItem, UIImageView;

__attribute__((visibility("hidden")))
@interface CKReviewLargeAttachmentsTableViewCell : CKAbstractReviewTableViewCell

{
    UIImageView *_previewView;
    CKAttachmentItem *_attachmentItem;
}

@property (retain, nonatomic) UIImageView *previewView;
@property (retain, nonatomic) CKAttachmentItem *attachmentItem;

+ (double)requestedHeight;
+ (struct CGSize)leftHandSideViewSize;

- (void)prepareForReuse;
- (void)setModelObject:(id)arg1;
- (id)leftHandSideView;
- (void)_updateImageViewForAttachmentItem;

@end

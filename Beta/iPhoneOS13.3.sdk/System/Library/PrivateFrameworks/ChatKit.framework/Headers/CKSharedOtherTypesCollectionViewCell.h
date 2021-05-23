/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKSharedContentsCollectionViewCell.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface CKSharedOtherTypesCollectionViewCell : CKSharedContentsCollectionViewCell

{
    UIImageView *_thumbnailImageView;
}

@property (retain, nonatomic) UIImageView *thumbnailImageView;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (void)configureWithAttachmentItem:(id)arg1;
- (void)configureWithThumbnail:(id)arg1 fileURL:(id)arg2;

@end

/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/SLSheetImagePreviewView.h>

@class CALayer, NSMutableArray, UILabel;

@interface SLSheetPhotoAlbumImageView : SLSheetImagePreviewView

{
    CALayer *_frameLayer;
    CALayer *_glossLayer;
    NSMutableArray *_frameViews;
    long long _imageQuantity;
    long long _numPreviewImagesAdded;
    UILabel *_imageCountLabel;
    _Bool _allAttachmentsAreImages;
}

+ (unsigned long long)displayedFrameMaximum;

- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)setPreviewImage:(id)arg1 forAttachment:(id)arg2;
- (id)_itemCountString;
- (void)addPreviewImage:(id)arg1;
- (_Bool)_shouldDisplayImageCountLabel;
- (id)initWithPrincipalAttachments:(id)arg1;
- (void)setItemCountString:(id)arg1;

@end

/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface ICDocCamExtractedDocumentThumbnailCell : UICollectionViewCell

{
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIImageView *imageView;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)applyLayoutAttributes:(id)arg1;

@end

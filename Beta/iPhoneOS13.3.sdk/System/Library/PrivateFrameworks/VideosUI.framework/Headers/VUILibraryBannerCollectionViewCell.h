/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class VUILabel;

__attribute__((visibility("hidden")))
@interface VUILibraryBannerCollectionViewCell : UICollectionViewCell

{
    VUILabel *_titleLabel;
}

@property (nonatomic, readonly) VUILabel *titleLabel;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

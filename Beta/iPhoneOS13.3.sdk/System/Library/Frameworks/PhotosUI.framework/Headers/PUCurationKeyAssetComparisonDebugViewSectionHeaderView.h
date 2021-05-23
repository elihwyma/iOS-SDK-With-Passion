/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface PUCurationKeyAssetComparisonDebugViewSectionHeaderView : UICollectionViewCell

{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSString *_title;
    NSString *_subtitle;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

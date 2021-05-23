/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSString, VUILabel;

__attribute__((visibility("hidden")))
@interface VUIMenuSectionHeaderCollectionViewCell : UICollectionViewCell

{
    NSString *_title;
    VUILabel *_titleLabel;
}

@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) NSString *title;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;

@end

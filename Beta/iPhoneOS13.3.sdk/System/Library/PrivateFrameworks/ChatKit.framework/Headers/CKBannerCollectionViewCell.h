/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface CKBannerCollectionViewCell : UICollectionViewCell

{
    UIImageView *_bannerView;
}

@property (retain, nonatomic) UIImageView *bannerView;

+ (id)reuseIdentifier;

- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setBannerImage:(id)arg1;
- (void)configureWithEntity:(id)arg1;

@end

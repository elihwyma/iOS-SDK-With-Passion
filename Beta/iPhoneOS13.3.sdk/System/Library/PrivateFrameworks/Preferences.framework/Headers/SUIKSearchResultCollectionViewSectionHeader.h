/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UICollectionReusableView.h>

@class UIImageView;

@interface SUIKSearchResultCollectionViewSectionHeader : UICollectionReusableView

{
    UIImageView *_categoryImageView;
}

@property (retain, nonatomic) UIImageView *categoryImageView;

+ (id)reuseIdentifier;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)prepareForReuse;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setCategoryImage:(id)arg1;

@end

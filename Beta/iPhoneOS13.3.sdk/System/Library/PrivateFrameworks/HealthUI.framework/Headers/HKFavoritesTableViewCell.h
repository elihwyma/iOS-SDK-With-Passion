/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class UIImageView;

@interface HKFavoritesTableViewCell : UITableViewCell

{
    UIImageView *_star;
    UIImageView *_filledStar;
}

@property (nonatomic, getter=isFavorited) _Bool favorited;

+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

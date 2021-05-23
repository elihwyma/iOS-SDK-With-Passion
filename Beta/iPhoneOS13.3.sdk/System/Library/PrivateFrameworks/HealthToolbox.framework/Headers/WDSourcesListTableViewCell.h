/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UITableViewCell.h>

@class HKSourceDataModel, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface WDSourcesListTableViewCell : UITableViewCell

{
    HKSourceDataModel *_sourceModel;
    UIImageView *_iconImage;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) HKSourceDataModel *sourceModel;

+ (id)defaultReuseIdentifier;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupConstraints;
- (void)setUpSubviews;
- (void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 fetchError:(id)arg3;

@end

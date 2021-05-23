/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIActivityIndicatorView, UIImageView;

@interface HKDataMetadataWorkoutRouteCell : UITableViewCell

{
    UIImageView *_routeImageView;
    UIActivityIndicatorView *_activityIndicator;
    NSLayoutConstraint *_heightConstraint;
}

@property (retain, nonatomic) UIImageView *routeImageView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;

- (id)init;
- (void)setupConstraints;
- (void)setRouteImage:(id)arg1;

@end

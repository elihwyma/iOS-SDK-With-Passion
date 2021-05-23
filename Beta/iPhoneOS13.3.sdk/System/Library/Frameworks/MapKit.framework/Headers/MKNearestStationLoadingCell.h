/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UITableViewCell.h>

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface MKNearestStationLoadingCell : UITableViewCell

{
    UIActivityIndicatorView *_activityIndicatorView;
}

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)startAnimating;
- (void)stopAnimating;

@end

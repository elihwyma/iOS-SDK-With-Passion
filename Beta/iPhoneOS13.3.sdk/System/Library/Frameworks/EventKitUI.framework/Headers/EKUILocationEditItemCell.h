/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableViewCell.h>

@class UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface EKUILocationEditItemCell : UITableViewCell

{
    UILabel *_title;
    UIImageView *_image;
    UIActivityIndicatorView *_spinner;
    UIButton *_clearButton;
    CDUnknownBlockType _clearButtonTapped;
}

@property (copy, nonatomic) CDUnknownBlockType clearButtonTapped;

- (id)description;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_clearButtonTapped:(id)arg1;
- (void)updateWithName:(id)arg1 sourceSupportsAvailability:(_Bool)arg2 availabilityRequestInProgress:(_Bool)arg3 availabilityType:(long long)arg4;

@end

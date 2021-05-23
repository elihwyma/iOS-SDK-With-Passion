/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableViewCell.h>

@class UIActivityIndicatorView, UIImageView, UILabel;

@interface EKUIConferenceRoomSearchResultCell : UITableViewCell

{
    UILabel *_title;
    UIImageView *_image;
    UIActivityIndicatorView *_spinner;
}

- (id)description;
- (void)safeAreaInsetsDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateSeparatorInset;
- (void)reloadWithConferenceRoom:(id)arg1;

@end

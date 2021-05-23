/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UITableViewCell.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface MCUIInfoListCell : UITableViewCell

{
    UILabel *_label;
}

+ (id)reuseIdentifier;
+ (id)textFont;
+ (double)heightForText:(id)arg1 constrainedToSize:(struct CGSize)arg2;

- (id)init;
- (void)_setText:(id)arg1;

@end

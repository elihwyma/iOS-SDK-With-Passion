/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface WDHealthDataCategoryNoDataTableViewCell : UITableViewCell

{
    UILabel *_displayTypeLabel;
    NSString *_displayTypeText;
}

@property (copy, nonatomic) NSString *displayTypeText;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_setupUI;

@end

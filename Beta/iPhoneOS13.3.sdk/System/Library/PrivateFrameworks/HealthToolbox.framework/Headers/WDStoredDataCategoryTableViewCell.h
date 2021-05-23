/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UITableViewCell.h>

@class HKDisplayCategory, HKDisplayType;

__attribute__((visibility("hidden")))
@interface WDStoredDataCategoryTableViewCell : UITableViewCell

{
    HKDisplayCategory *_category;
    HKDisplayType *_displayType;
}

@property (retain) HKDisplayCategory *category;
@property (retain, nonatomic) HKDisplayType *displayType;

@end

/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString;

@interface HUCharacteristicStateCell : UITableViewCell

{
    _Bool _enabled;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *valueText;
@property (nonatomic) _Bool enabled;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

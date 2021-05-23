/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UITableViewCell.h>

@class ALCity;

@interface PSTimeZoneTableCell : UITableViewCell

{
    ALCity *_city;
}

@property (retain, nonatomic) ALCity *city;

- (void)prepareForReuse;
- (id)_contentString;

@end

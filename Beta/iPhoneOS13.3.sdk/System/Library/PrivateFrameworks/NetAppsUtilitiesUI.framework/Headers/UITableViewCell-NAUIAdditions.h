/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
 */

#import <UIKit/UITableViewCell.h>

@interface UITableViewCell (NAUIAdditions)

+ (_Bool)naui_supportsAutoLayout;
+ (id)naui_prototypeCell;
+ (double)naui_tableRowHeight;
+ (double)naui_estimatedTableRowHeight;

@end

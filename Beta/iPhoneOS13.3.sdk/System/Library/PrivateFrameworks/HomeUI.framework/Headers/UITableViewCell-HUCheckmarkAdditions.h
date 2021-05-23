/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

@class NSNumber;

@interface UITableViewCell (HUCheckmarkAdditions)

@property (copy, nonatomic, setter=hu_setForcedSeparatorStyle:) NSNumber *hu_forcedSeparatorStyle;

+ (id)hu_emptyCheckmarkPlaceholderImage;

- (void)removeMargins;
- (void)turnOffRounding;
- (void)hu_configureCheckmarkForImageView:(id)arg1 checked:(_Bool)arg2;

@end

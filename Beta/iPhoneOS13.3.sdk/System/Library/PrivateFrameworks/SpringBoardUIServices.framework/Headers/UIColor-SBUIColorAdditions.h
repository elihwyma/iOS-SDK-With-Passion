/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIColor.h>

@interface UIColor (SBUIColorAdditions)

+ (id)sbui_randomColor;

- (_Bool)sb_isGrayscale;
- (double)sb_brightness;

@end

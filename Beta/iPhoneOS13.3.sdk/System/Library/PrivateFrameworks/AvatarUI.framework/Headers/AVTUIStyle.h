/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface AVTUIStyle : NSObject

{
    UIColor *_backgroundColor;
    UIColor *_textColor;
}

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textColor;

+ (id)darkStyle;
+ (id)lightStyle;

@end

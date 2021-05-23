/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIImage;

@interface HKLegendEntry : NSObject

{
    NSString *_title;
    UIColor *_dotColor;
    UIColor *_innerDotColor;
    UIColor *_labelColor;
    UIImage *_icon;
    UIColor *_iconTint;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *dotColor;
@property (retain, nonatomic) UIColor *innerDotColor;
@property (retain, nonatomic) UIColor *labelColor;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIColor *iconTint;

+ (id)legendEntryWithTitle:(id)arg1 dotColor:(id)arg2 innerDotColor:(id)arg3;
+ (id)legendEntryWithTitle:(id)arg1 labelColor:(id)arg2;
+ (id)legendEntryWithTitle:(id)arg1 icon:(id)arg2 iconTint:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)initWithTitle:(id)arg1 dotColor:(id)arg2 innerDotColor:(id)arg3 labelColor:(id)arg4 icon:(id)arg5 iconTint:(id)arg6;

@end

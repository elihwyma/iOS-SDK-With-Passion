/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface HKSplashScreenItem : NSObject

{
    NSString *_title;
    NSString *_fullDescription;
    UIImage *_icon;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *fullDescription;
@property (retain, nonatomic) UIImage *icon;

+ (id)splashScreenItemWithTitle:(id)arg1 icon:(id)arg2 fullDescription:(id)arg3;
+ (id)splashScreenItemWithDictionary:(id)arg1;

@end

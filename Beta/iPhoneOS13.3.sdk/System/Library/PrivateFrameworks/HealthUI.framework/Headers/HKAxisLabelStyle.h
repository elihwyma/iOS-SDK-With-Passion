/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class UIColor, UIFont;

@protocol HKNumberFormatter;

@interface HKAxisLabelStyle : NSObject

{
    UIColor *_textColor;
    UIFont *_font;
    long long _horizontalAlignment;
    long long _verticalAlignment;
    id <HKNumberFormatter> _numberFormatter;
}

@property (copy, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) long long verticalAlignment;
@property (retain, nonatomic) id <HKNumberFormatter> numberFormatter;

+ (id)labelStyleWithColor:(id)arg1 font:(id)arg2 horizontalAlignment:(long long)arg3 verticalAlignment:(long long)arg4;
+ (id)labelStyleWithColor:(id)arg1 font:(id)arg2 horizontalAlignment:(long long)arg3 verticalAlignment:(long long)arg4 numberFormatter:(id)arg5;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end

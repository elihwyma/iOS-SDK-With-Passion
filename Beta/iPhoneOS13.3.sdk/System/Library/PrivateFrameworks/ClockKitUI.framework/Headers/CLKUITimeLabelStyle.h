/*
 Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

#import <Foundation/NSObject.h>

@class CLKFont;

@interface CLKUITimeLabelStyle : NSObject

{
    CLKFont *_threeDigitFont;
    CLKFont *_fourDigitFont;
    CLKFont *_designatorFont;
}

@property (retain, nonatomic) CLKFont *threeDigitFont;
@property (retain, nonatomic) CLKFont *fourDigitFont;
@property (retain, nonatomic) CLKFont *designatorFont;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

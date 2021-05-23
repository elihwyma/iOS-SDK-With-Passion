/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface _HKCalendarDayCellIconConfiguration : NSObject

{
    long long _dateIndex;
    UIColor *_color;
    long long _style;
}

+ (id)configurationWithDateIndex:(long long)arg1 color:(id)arg2 style:(long long)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

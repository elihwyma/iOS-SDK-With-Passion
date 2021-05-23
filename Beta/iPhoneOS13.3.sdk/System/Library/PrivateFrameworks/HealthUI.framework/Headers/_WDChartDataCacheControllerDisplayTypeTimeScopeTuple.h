/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKDisplayType;

@interface _WDChartDataCacheControllerDisplayTypeTimeScopeTuple : NSObject

{
    HKDisplayType *_displayType;
    long long _timeScope;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDisplayType:(id)arg1 timeScope:(long long)arg2;

@end

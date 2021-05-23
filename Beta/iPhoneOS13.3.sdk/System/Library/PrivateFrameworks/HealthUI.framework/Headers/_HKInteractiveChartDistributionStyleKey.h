/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _HKInteractiveChartDistributionStyleKey : NSObject

{
    long long _style;
    long long _timeScope;
    NSString *_predicateName;
}

@property (nonatomic) long long style;
@property (nonatomic) long long timeScope;
@property (retain, nonatomic) NSString *predicateName;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDistributionStyle:(long long)arg1 timeScope:(long long)arg2 predicateName:(id)arg3;

@end

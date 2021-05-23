/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

#import <WeatherFoundation/Swift-Protocol.h>

@class NSDate;

@interface WFPollenConditions : NSObject <Swift>

{
    NSDate *_date;
    unsigned long long _timeOfDay;
    unsigned long long _grassIndex;
    unsigned long long _ragweedIndex;
    unsigned long long _treeIndex;
}

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long timeOfDay;
@property (nonatomic) unsigned long long grassIndex;
@property (nonatomic) unsigned long long ragweedIndex;
@property (nonatomic) unsigned long long treeIndex;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

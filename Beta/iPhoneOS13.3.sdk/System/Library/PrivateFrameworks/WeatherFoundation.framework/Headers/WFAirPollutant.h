/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

#import <WeatherFoundation/Swift-Protocol.h>

@class NSString;

@interface WFAirPollutant : NSObject <Swift>

{
    NSString *_localizedName;
    NSString *_localizedDescription;
    double _amount;
    NSString *_unit;
    NSString *_localizedCategoryDescription;
    unsigned long long _categoryIndex;
    unsigned long long _index;
}

@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSString *localizedDescription;
@property (nonatomic) double amount;
@property (retain, nonatomic) NSString *unit;
@property (retain, nonatomic) NSString *localizedCategoryDescription;
@property (nonatomic) unsigned long long categoryIndex;
@property (nonatomic) unsigned long long index;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

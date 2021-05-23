/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface HDDemoDataFoodObject : NSObject <Swift>

{
    NSString *_brandName;
    NSString *_genericName;
    long long _foodType;
    NSDictionary *_nutritionFacts;
    double _recommendedNumServings;
}

@property (copy, nonatomic) NSString *brandName;
@property (copy, nonatomic) NSString *genericName;
@property (nonatomic) long long foodType;
@property (copy, nonatomic) NSDictionary *nutritionFacts;
@property (nonatomic) double recommendedNumServings;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToHDDemoDataFoodObject:(id)arg1;
- (id)initWithBrandName:(id)arg1 genericName:(id)arg2 foodType:(long long)arg3 nutritionFacts:(id)arg4;

@end

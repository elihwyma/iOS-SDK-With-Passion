/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _HKFactorization : NSObject <Swift>

{
    NSMapTable *_factors;
}

+ (_Bool)supportsSecureCoding;
+ (id)factorizationFromString:(id)arg1 factorGrammar:(id)arg2;
+ (id)factorization;
+ (id)factorizationWithFactor:(id)arg1 exponent:(long long)arg2;
+ (id)factorizationWithFactorsAndExponents:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)unitString;
- (unsigned long long)factorCount;
- (id)anyFactor;
- (long long)exponentForFactor:(id)arg1;
- (id)factorizationByRaisingToExponent:(long long)arg1;
- (void)enumerateFactorsWithHandler:(CDUnknownBlockType)arg1;
- (void)_multiplyByFactor:(id)arg1 exponent:(long long)arg2;
- (void)_enumerateFactorsWithHandler:(CDUnknownBlockType)arg1;
- (void)_multiplyByFactorization:(id)arg1;
- (id)reciprocal;
- (id)factorizationByMultiplying:(id)arg1;
- (void)_raiseToExponent:(long long)arg1;
- (long long)_exponentForFactor:(id)arg1;
- (id)factorizationByDividing:(id)arg1;

@end

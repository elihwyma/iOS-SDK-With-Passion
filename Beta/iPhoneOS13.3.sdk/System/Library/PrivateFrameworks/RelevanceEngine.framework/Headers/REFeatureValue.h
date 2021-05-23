/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface REFeatureValue : NSObject

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) _Bool boolValue;
@property (nonatomic, readonly) unsigned long long int64Value;
@property (nonatomic, readonly) double doubleValue;
@property (copy, nonatomic, readonly) NSString *stringValue;
@property (nonatomic, readonly) NSSet *setValue;

+ (id)featureValueWithInt64:(long long)arg1;
+ (id)featureValueWithDouble:(double)arg1;
+ (id)featureValueWithString:(id)arg1;
+ (id)nullValueForFeature:(id)arg1;
+ (id)featureValueWithBool:(_Bool)arg1;
+ (id)featureValueWithDictionary:(id)arg1;
+ (id)featureValueWithSet:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryEncoding;
- (unsigned long long)_integralFeatureValue;

@end

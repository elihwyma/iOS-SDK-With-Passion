/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKInspectableValue, NSArray, NSString;

@interface HKInspectableValueCollection : NSObject <Swift>

{
    long long _collectionType;
    NSArray *_collection;
    NSArray *_elementTags;
}

@property (nonatomic, readonly) NSArray *collection;
@property (nonatomic, readonly) NSArray *elementTags;
@property (nonatomic, readonly) long long collectionType;
@property (nonatomic, readonly) HKInspectableValue *inspectableValue;
@property (nonatomic, readonly) HKInspectableValue *min;
@property (nonatomic, readonly) HKInspectableValue *max;
@property (nonatomic, readonly) NSArray *inspectableValues;
@property (nonatomic, readonly) NSString *unitString;

+ (_Bool)supportsSecureCoding;
+ (id)inspectableValueCollectionRangeWithMin:(id)arg1 max:(id)arg2;
+ (id)inspectableValueCollectionRangeWithMin:(id)arg1;
+ (id)inspectableValueCollectionRangeWithMax:(id)arg1;
+ (id)inspectableValueCollectionSingleWithValue:(id)arg1;
+ (id)inspectableValueCollectionListWithValues:(id)arg1;
+ (id)inspectableValueCollectionTaggedListWithValues:(id)arg1 tags:(id)arg2;
+ (_Bool)hasNoValue:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithCollectionType:(long long)arg1 collection:(id)arg2;
- (id)_initWithCollectionType:(long long)arg1 collection:(id)arg2 tags:(id)arg3;
- (void)_assertCollectionType;
- (id)valuesWithTag:(id)arg1;

@end

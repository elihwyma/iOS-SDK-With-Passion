/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSString;

@interface TSSPropertyMap : NSObject <Swift>

{
    struct TSSPropertyStore *mStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)propertyMap;
+ (id)propertyMapWithPropertiesAndValues:(int)arg1;
+ (id)propertyMapWithPropertyMap:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)allKeys;
- (void)setObject:(id)arg1 forProperty:(int)arg2;
- (id)objectForProperty:(int)arg1;
- (id)allProperties;
- (id)diff:(id)arg1;
- (id)initWithPropertiesAndValues:(int)arg1;
- (void)setIntValue:(int)arg1 forProperty:(int)arg2;
- (float)floatValueForProperty:(int)arg1;
- (void)setFloatValue:(float)arg1 forProperty:(int)arg2;
- (_Bool)containsProperty:(int)arg1;
- (void)setDoubleValue:(double)arg1 forProperty:(int)arg2;
- (id)initWithFirstKey:(int)arg1 andArgumentList:(char *)arg2;
- (id)boxedObjectForProperty:(int)arg1;
- (void)enumeratePropertiesAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addValuesFromPropertyMap:(id)arg1;
- (void)removeValuesFromPropertyMap:(id)arg1;
- (void)removeValueForProperty:(int)arg1;
- (void)filterWithProperties:(id)arg1;
- (int)intValueForProperty:(int)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (double)CGFloatValueForProperty:(int)arg1;
- (id)initWithPropertyMap:(id)arg1;
- (void)p_getAllKeys:(int *)arg1;
- (id)old_description;
- (void)setBoxedObject:(id)arg1 forProperty:(int)arg2;
- (void)setCGFloatValue:(double)arg1 forProperty:(int)arg2;
- (void)setBoolValue:(_Bool)arg1 forProperty:(int)arg2;
- (_Bool)definesProperty:(int)arg1;
- (_Bool)containsAnyPropertyInProperties:(id)arg1;
- (void)removeValuesForProperties:(id)arg1;
- (void)removeAllPropertyValues;
- (void)minusPropertyMap:(id)arg1;
- (id)diffOnlyDifferences:(id)arg1;
- (id)diffPropertyNames:(id)arg1;
- (id)propertyMapByAddingValuesFromPropertyMap:(id)arg1;
- (id)propertyMapByRemovingValuesFromPropertyMap:(id)arg1;
- (id)propertyMapByRemovingValuesForProperties:(id)arg1;
- (id)propertyMapWithProperties:(id)arg1;
- (void)pSetArrayOfObjects:(id [9])arg1 forProperty:(int)arg2;
- (void)pSetArrayOfFloats:(double [9])arg1 forProperty:(int)arg2;

@end

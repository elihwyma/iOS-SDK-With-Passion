/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@interface TSSPropertySet : NSObject <Swift>

{
    id mIndexSet;
}

+ (id)propertySetWithProperties:(int)arg1;
+ (id)propertySet;
+ (id)p_mutableIndexSetWithFirstProperty:(int)arg1 argumentList:(char *)arg2;
+ (id)propertySetWithProperty:(int)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)initWithIndexSet:(id)arg1;
- (id)initWithProperties:(int)arg1;
- (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;
- (id)propertySetByIntersectingWithPropertySet:(id)arg1;
- (_Bool)containsProperty:(int)arg1;
- (id)propertySetByAddingPropertiesFromSet:(id)arg1;
- (_Bool)containsProperties:(id)arg1;
- (id)propertySetByRemovingPropertiesFromSet:(id)arg1;
- (id)initWithFirstProperty:(int)arg1 argumentList:(char *)arg2;
- (id)initWithPropertySet:(id)arg1;
- (_Bool)intersectsProperties:(id)arg1;
- (id)propertySetByAddingProperties:(int)arg1;
- (id)propertySetByAddingProperty:(int)arg1;
- (id)propertySetByRemovingProperty:(int)arg1;
- (id)propertySetByRemovingProperties:(int)arg1;
- (id)propertyStrings;

@end

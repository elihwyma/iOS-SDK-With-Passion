//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface TSSPropertySet : NSObject <NSCopying, NSMutableCopying>
{
    id mIndexSet;
}

+ (id)propertySetFromUnionOfPropertySets:(id)arg1;
+ (id)propertySetWithArray:(id)arg1;
+ (id)propertySet;
+ (id)propertySetWithProperties:(int)arg1;
+ (id)propertySetWithProperty:(int)arg1;
// + (id)p_mutableIndexSetWithFirstProperty:(int)arg1 argumentList:(struct __va_list_tag [1])arg2;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)propertyStrings;
- (id)propertySetByIntersectingWithPropertySet:(id)arg1;
- (id)propertySetByRemovingPropertiesFromSet:(id)arg1;
- (id)propertySetByRemovingProperties:(int)arg1;
- (id)propertySetByRemovingProperty:(int)arg1;
- (id)propertySetByAddingProperty:(int)arg1;
- (id)propertySetByAddingPropertiesFromSet:(id)arg1;
- (id)propertySetByAddingProperties:(int)arg1;
- (BOOL)intersectsProperties:(id)arg1;
- (void)enumeratePropertiesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)containsProperties:(id)arg1;
- (BOOL)containsProperty:(int)arg1;
- (NSUInteger)count;
- (id)initWithProperties:(int)arg1;
- (id)initWithPropertySet:(id)arg1;
// - (id)initWithFirstProperty:(int)arg1 argumentList:(struct __va_list_tag [1])arg2;
- (id)init;
- (id)initWithIndexSet:(id)arg1;

@end


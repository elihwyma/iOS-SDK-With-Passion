//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKSosBase.h>

__attribute__((visibility("hidden")))
@interface TSSStylePropertyChangeSet : TSKSosBase
{
}

- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToChangeSet:(id)arg1;
- (id)propertyChangeFilteredByProperties:(id)arg1;
- (BOOL)isEmptyChangeSet;
- (id)changedPropertyPaths;
- (id)variationStyleFrom:(id)arg1 inStylesheet:(id)arg2;
- (id)variationPropertyMapFromParentStyle:(id)arg1;
- (id)variationPropertyMapFromStyle:(id)arg1;
- (id)p_variationPropertyMapFromStyle:(id)arg1 withPropertyMap:(id)arg2;
- (id)collectUnset;
- (id)collectUndoForStyle:(id)arg1;
- (void)enumerateDefinedPropertiesWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)setUnsetSpecForProperty:(int)arg1;
- (void)setSpec:(id)arg1 forProperty:(int)arg2;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;

@end


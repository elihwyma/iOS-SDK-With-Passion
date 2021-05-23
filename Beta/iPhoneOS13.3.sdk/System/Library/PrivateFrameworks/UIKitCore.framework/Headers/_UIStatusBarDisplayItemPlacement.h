/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSHashTable, NSSet, _UIStatusBarIdentifier;

@interface _UIStatusBarDisplayItemPlacement : NSObject

{
    _Bool _enabled;
    long long _priority;
    _UIStatusBarIdentifier *_identifier;
    NSHashTable *_excludedPlacements;
    NSSet *_excludedRegionIdentifiers;
    NSHashTable *_includedPlacements;
    NSHashTable *_allRequiredPlacements;
    NSHashTable *_anyRequiredPlacements;
    NSDictionary *_itemInfo;
}

@property (nonatomic) long long priority;
@property (copy, nonatomic, readonly) _UIStatusBarIdentifier *identifier;
@property (copy, nonatomic, readonly) NSHashTable *excludedPlacements;
@property (copy, nonatomic, readonly) NSSet *excludedRegionIdentifiers;
@property (copy, nonatomic, readonly) NSHashTable *includedPlacements;
@property (copy, nonatomic, readonly) NSHashTable *allRequiredPlacements;
@property (copy, nonatomic, readonly) NSHashTable *anyRequiredPlacements;
@property (copy, nonatomic, readonly) NSDictionary *itemInfo;
@property (nonatomic, getter=isEnabled) _Bool enabled;

+ (id)placementWithIdentifier:(id)arg1 priority:(long long)arg2;
+ (id)spacerPlacementWithSize:(struct CGSize)arg1 priority:(long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)requiringAllPlacements:(id)arg1;
- (id)requiringAnyPlacements:(id)arg1;
- (id)excludingPlacements:(id)arg1;
- (id)excludingAllPlacementsInRegions:(id)arg1 exceptPlacements:(id)arg2;
- (id)disabledPlacement;
- (id)excludingAllPlacementsInRegions:(id)arg1;
- (id)withItemInfo:(id)arg1;

@end

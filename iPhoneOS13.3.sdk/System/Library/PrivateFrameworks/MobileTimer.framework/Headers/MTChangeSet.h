//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet;

@interface MTChangeSet : NSObject
{
    NSSet *_changedProperties;
    NSDictionary *_changeDictionary;
}

+ (id)changeSetWithChangesFromObject:(id)arg1 toObject:(id)arg2 inProperties:(id)arg3;
+ (id)changeSetWithChangesFromObject:(id)arg1 toObject:(id)arg2;
+ (id)dictionaryFromChanges:(id)arg1;
@property(retain, nonatomic) NSDictionary *changeDictionary; // @synthesize changeDictionary=_changeDictionary;
@property(retain, nonatomic) NSSet *changedProperties; // @synthesize changedProperties=_changedProperties;
// - (void).cxx_destruct;
- (id)description;
- (id)_deserializer;
- (id)deserializedChangedValueForProperty:(id)arg1 hasProperty:(BOOL )arg2;
- (id)changedValueForProperty:(id)arg1 hasProperty:(BOOL )arg2;
- (BOOL)hasChangesInCommonWithChangeSet:(id)arg1;
- (BOOL)hasChangeForProperty:(id)arg1;
- (BOOL)hasChangesInProperties:(id)arg1;
@property(readonly, nonatomic) NSArray *changes;
- (id)changeSetByAddingChangeSet:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEquivalentToChangeSet:(id)arg1;
- (BOOL)_isEqualToChangeSet:(id)arg1 checkOriginalValues:(BOOL)arg2;
- (id)initWithChangeDictionary:(id)arg1;
- (id)initWithChanges:(id)arg1;

@end

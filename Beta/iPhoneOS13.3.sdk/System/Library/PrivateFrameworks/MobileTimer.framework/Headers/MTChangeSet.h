/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSSet;

@interface MTChangeSet : NSObject

{
    NSSet *_changedProperties;
    NSDictionary *_changeDictionary;
}

@property (retain, nonatomic) NSSet *changedProperties;
@property (retain, nonatomic) NSDictionary *changeDictionary;
@property (nonatomic, readonly) NSArray *changes;

+ (id)dictionaryFromChanges:(id)arg1;
+ (id)changeSetWithChangesFromObject:(id)arg1 toObject:(id)arg2;
+ (id)changeSetWithChangesFromObject:(id)arg1 toObject:(id)arg2 inProperties:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithChanges:(id)arg1;
- (_Bool)hasChangesInProperties:(id)arg1;
- (id)initWithChangeDictionary:(id)arg1;
- (_Bool)_isEqualToChangeSet:(id)arg1 checkOriginalValues:(_Bool)arg2;
- (id)changedValueForProperty:(id)arg1 hasProperty:(_Bool *)arg2;
- (_Bool)isEquivalentToChangeSet:(id)arg1;
- (id)changeSetByAddingChangeSet:(id)arg1;
- (_Bool)hasChangeForProperty:(id)arg1;
- (_Bool)hasChangesInCommonWithChangeSet:(id)arg1;
- (id)deserializedChangedValueForProperty:(id)arg1 hasProperty:(_Bool *)arg2;
- (id)_deserializer;

@end

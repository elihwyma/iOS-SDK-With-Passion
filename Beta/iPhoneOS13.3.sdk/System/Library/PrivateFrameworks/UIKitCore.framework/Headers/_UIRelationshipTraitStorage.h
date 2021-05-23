/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UITraitStorage.h>

@class NSOrderedSet;

__attribute__((visibility("hidden")))
@interface _UIRelationshipTraitStorage : _UITraitStorage

{
    NSOrderedSet *_relationshipCandidates;
}

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyRecordsMatchingTraitCollection:(id)arg1;
- (id)_propertyDescriptionString;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 relationshipCandidates:(id)arg3;
- (void)addRecordWithTraitCollection:(id)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3;

@end

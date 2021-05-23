/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSCyclerBookmarkRepresentation.h>

@class NSMutableArray;

@interface WBSCyclerBookmarkListRepresentation : WBSCyclerBookmarkRepresentation

{
    NSMutableArray *_children;
}

@property (nonatomic, readonly) unsigned long long numberOfChildren;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addChild:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)childAtIndex:(unsigned long long)arg1;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)isEquivalent:(id)arg1;
- (id)initWithTitle:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)pairsOfBookmarksWithDifferingExtraAttributesComparedTo:(id)arg1;
- (_Bool)_tryToDeleteDescendant:(id)arg1;
- (_Bool)containsChild:(id)arg1;
- (_Bool)containsDescendant:(id)arg1;
- (id)descendantWithUniqueIdentifier:(id)arg1;
- (id)allDescendantsPassingTest:(CDUnknownBlockType)arg1;
- (id)randomDescendantPassingTest:(CDUnknownBlockType)arg1;
- (void)deleteChild:(id)arg1;
- (void)deleteDescendant:(id)arg1;
- (void)deleteAllChildren;
- (id)randomDescendant;
- (id)randomListDescendant;

@end

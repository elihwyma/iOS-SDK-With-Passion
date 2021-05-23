/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

#import <NotesShared/Swift-Protocol.h>

@class CRArray, CRDocument, CRSet, NSMapTable, NSMutableOrderedSet, NSString;

@protocol CRUndoDelegate;

@interface CRTombstoneOrderedSet : NSObject <Swift>

{
    NSMutableOrderedSet *_cachedIdentifierSet;
    NSMapTable *_cachedIndexMapping;
    CRDocument *_document;
    NSObject<CRUndoDelegate> *_delegate;
    CRArray *_ordering;
    CRSet *_elements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSMutableOrderedSet *cachedIdentifierSet;
@property (nonatomic, readonly) NSMapTable *cachedIndexMapping;
@property (retain, nonatomic) CRArray *ordering;
@property (retain, nonatomic) CRSet *elements;
@property (weak, nonatomic) CRDocument *document;
@property (weak, nonatomic) NSObject<CRUndoDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)tombstone;
- (id)initWithDocument:(id)arg1;
- (id)objectForIdentifier:(id)arg1;
- (unsigned long long)indexOfEqualObject:(id)arg1;
- (void)moveObjectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)addUndoCommandsForObject:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)wantsUndoCommands;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)moveClock;
- (void)encodeWithCRCoder:(id)arg1 orderedSet:(struct OrderedSet *)arg2;
- (id)initWithCRCoder:(id)arg1 orderedSet:(const struct OrderedSet *)arg2;
- (id)initWithOrdering:(id)arg1 elements:(id)arg2 document:(id)arg3;
- (void)regenerateNSOrderedIdentifierSetAndIndexMapping;
- (id)generateNSOrderedIdentifierSetWithIndexMapping:(id)arg1;
- (id)identifierForObjectInCachedSet:(id)arg1;
- (void)shiftCachedIndicesStartingAtIndex:(unsigned long long)arg1 by:(long long)arg2;
- (void)undoablyRemoveObjectIdentifiersFromElements:(id)arg1;
- (void)wipeoutCaches;
- (void)undoablyInsertObjectIdentifiersIntoElements:(id)arg1;
- (void)_removeObjectsFromOrderingAtIndices:(id)arg1;
- (void)moveObjectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 mutableSafe:(_Bool)arg3;
- (void)reinsertIdentifier:(id)arg1 withMaskedIdentifiers:(id)arg2 atIndex:(unsigned long long)arg3 forObjectToMove:(id)arg4;
- (_Bool)containsObjectEqualTo:(id)arg1;
- (void)safeMoveObjectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)realizeElementMutations;

@end

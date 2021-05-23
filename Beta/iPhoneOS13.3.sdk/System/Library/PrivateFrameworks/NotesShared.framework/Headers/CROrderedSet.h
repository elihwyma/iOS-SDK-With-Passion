/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

#import <NotesShared/Swift-Protocol.h>

@class CRDocument, CRSet, NSArray, NSMutableArray, NSString;

@interface CROrderedSet : NSObject <Swift>

{
    CRSet *_contents;
    NSMutableArray *_orderedArray;
}

@property (retain, nonatomic) CRSet *contents;
@property (retain, nonatomic) NSMutableArray *orderedArray;
@property (weak, nonatomic) CRDocument *document;
@property (readonly) unsigned long long count;
@property (copy, readonly) NSArray *allObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeAllObjects;
- (unsigned long long)indexOfObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (void)addObjectsFromArray:(id)arg1;
- (id)tombstone;
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)moveObject:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)_sort;
- (id)_indexForIndex:(unsigned long long)arg1;
- (void)mergeWithSet:(id)arg1;

@end

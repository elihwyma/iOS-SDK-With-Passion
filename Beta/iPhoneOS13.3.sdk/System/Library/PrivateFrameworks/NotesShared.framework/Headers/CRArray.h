/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

#import <NotesShared/Swift-Protocol.h>

@class CRDictionary, CRDocument, NSString, NSUUID, TTArray;

@protocol CRUndoDelegate;

@interface CRArray : NSObject <Swift>

{
    _Bool _moveClock;
    CRDocument *_document;
    NSObject<CRUndoDelegate> *_delegate;
    TTArray *_array;
    CRDictionary *_contents;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) TTArray *array;
@property (retain, nonatomic) CRDictionary *contents;
@property (nonatomic) _Bool moveClock;
@property (weak, nonatomic) CRDocument *document;
@property (weak, nonatomic) NSObject<CRUndoDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSUUID *replicaUUID;
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
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)removeLastObject;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)tombstone;
- (id)initWithDocument:(id)arg1;
- (id)_addObject:(id)arg1;
- (void)moveObjectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)addUndoCommandsForObject:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)wantsUndoCommands;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (id)initWithTTArray:(id)arg1 contents:(id)arg2 document:(id)arg3;
- (id)_insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_insertObject:(id)arg1 withIdentifier:(id)arg2 atIndex:(unsigned long long)arg3 forUndo:(_Bool)arg4;
- (void)removeObjectAtIndex:(unsigned long long)arg1 forUndo:(_Bool)arg2;
- (unsigned long long)firstIndexOf:(id)arg1 fromIndex:(unsigned long long)arg2;
- (void)encodeWithCRCoder:(id)arg1 array:(struct Array *)arg2;
- (id)initWithCRCoder:(id)arg1 array:(const struct Array *)arg2;

@end

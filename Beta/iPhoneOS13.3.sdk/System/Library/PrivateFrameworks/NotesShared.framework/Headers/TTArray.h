/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

#import <NotesShared/Swift-Protocol.h>

@class CRDocument, NSArray, NSString, NSUUID, TTMergeableAttributedString;

@protocol CRUndoDelegate;

@interface TTArray : NSObject <Swift>

{
    CRDocument *_document;
    NSObject<CRUndoDelegate> *_delegate;
    TTMergeableAttributedString *_contents;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) TTMergeableAttributedString *contents;
@property (nonatomic, readonly) NSArray *nsArray;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSUUID *replicaUUID;
@property (retain, nonatomic) CRDocument *document;
@property (weak, nonatomic) NSObject<CRUndoDelegate> *delegate;
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
- (void)beginEditing;
- (void)endEditing;
- (unsigned long long)indexOfObject:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)removeLastObject;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (id)tombstone;
- (id)initWithDocument:(id)arg1;
- (id)initWithContents:(id)arg1;
- (_Bool)wantsUndoCommands;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)saveToArchive:(struct StringArray *)arg1;
- (id)initWithArchive:(const struct StringArray *)arg1 andReplicaID:(id)arg2;
- (id)textAttachmentAtIndex:(unsigned long long)arg1;
- (void)addUndoCommand:(id)arg1;
- (id)initWithCRCoder:(id)arg1 stringArray:(const struct StringArray *)arg2;
- (id)serializeDataFromArchive:(const struct StringArray *)arg1;

@end

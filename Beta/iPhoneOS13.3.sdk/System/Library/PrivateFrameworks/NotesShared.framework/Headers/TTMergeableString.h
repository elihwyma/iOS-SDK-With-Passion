/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

#import <NotesShared/Swift-Protocol.h>

@class CRTTCompatibleDocument, NSHashTable, NSMutableAttributedString, NSString, NSUUID, TTVectorMultiTimestamp;

@protocol TTMergeableStringDelegate;

@interface TTMergeableString : NSObject <Swift>

{
    vector_c5c053b6 _startNodes;
    vector_c5c053b6 _endNodes;
    vector_c5c053b6 _orderedSubstrings;
    unsigned int _unserializedClock;
    unsigned long long _editCount;
    _Bool _cacheInvalid;
    CDUnknownBlockType _updateRangeBlock;
    _Bool _hasLocalChanges;
    NSUUID *_replicaUUID;
    TTVectorMultiTimestamp *_timestamp;
    NSObject<TTMergeableStringDelegate> *_delegate;
    NSHashTable *_objectsNeedingUpdatedRanges;
    NSMutableAttributedString *_attributedString;
    unsigned long long _replicaTextClock;
    unsigned long long _replicaStyleClock;
}

@property (retain, nonatomic) CRTTCompatibleDocument *document;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) TTVectorMultiTimestamp *timestamp;
@property (nonatomic) _Bool hasLocalChanges;
@property (retain, nonatomic) NSUUID *replicaUUID;
@property (retain, nonatomic) NSMutableAttributedString *attributedString;
@property (nonatomic, readonly) unsigned long long replicaTextClock;
@property (nonatomic, readonly) unsigned long long replicaStyleClock;
@property (weak, nonatomic) NSObject<TTMergeableStringDelegate> *delegate;
@property (nonatomic, readonly) NSHashTable *objectsNeedingUpdatedRanges;

+ (id)unserialisedReplicaID;

- (id)init;
- (id)string;
- (void)dealloc;
- (unsigned long long)length;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (void)beginEditing;
- (void)endEditing;
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)deleteCharactersInRange:(struct _NSRange)arg1;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (id).cxx_construct;
- (id)serialize;
- (void)invalidateCache;
- (id)tombstone;
- (void)generateIdsForLocalChanges;
- (void)mergeWith:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (id)initWithReplicaID:(id)arg1;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;
- (unsigned long long)mergeWithString:(id)arg1 mergeTimestamps:(_Bool)arg2;
- (id)initWithArchive:(const struct String *)arg1 andReplicaID:(id)arg2 andSharedTimestamp:(id)arg3;
- (void)saveToArchive:(struct String *)arg1;
- (id)initWithReplicaID:(id)arg1 asFragment:(_Bool)arg2;
- (id)initWithArchive:(const struct String *)arg1 andReplicaID:(id)arg2;
- (void)getSubstrings:(vector_c5c053b6 *)arg1 forCharacterRange:(struct _NSRange)arg2;
- (void)deleteSubstrings:(vector_c5c053b6 *)arg1 withCharacterRanges:(vector_7053a16b *)arg2;
- (vector_c5c053b6 *)orderedSubstrings;
- (struct TopoSubstring *)splitTopoSubstring:(struct TopoSubstring *)arg1 atIndex:(unsigned int)arg2;
- (struct TopoIDRange)insertAttributedString:(id)arg1 after:(struct TopoSubstring *)arg2 before:(struct TopoSubstring *)arg3;
- (void)coalesce;
- (id)selectionForCharacterRanges:(id)arg1 selectionAffinity:(unsigned long long)arg2;
- (id)characterRangesForSelection:(id)arg1 selectedSubstringsBlock:(CDUnknownBlockType)arg2;
- (void)updateClock;
- (void)updateSubstringIndexes;
- (void)getSubstrings:(vector_c5c053b6 *)arg1 inOrderedSubstrings:(vector_c5c053b6 *)arg2 forCharacterRange:(struct _NSRange)arg3;
- (long long)substring:(struct TopoSubstring *)arg1 modifiedAfter:(id)arg2;
- (_Bool)textEitherSideOfSelectionAnchor:(struct TopoID)arg1 wasModifiedAfter:(id)arg2;
- (void)updateCache;
- (_Bool)isFragment;
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;
- (void)traverseUnordered:(CDUnknownBlockType)arg1;
- (void)generateIdsForLocalChangesSafeForSharedTimestamp:(_Bool)arg1;
- (void)cleanupObjectsNeedingUpdatedRanges;
- (vector_c5c053b6 *)startNodes;
- (vector_c5c053b6 *)endNodes;
- (void)dumpMergeData:(id)arg1;
- (void)checkTimestampLogStyleErrors:(_Bool)arg1;
- (_Bool)canMergeString:(id)arg1;
- (_Bool)check:(id *)arg1;
- (void)sortSplitNodes;
- (void)updateAttributedStringAfterMerge;
- (_Bool)graphIsEqual:(id)arg1;
- (id)replicaUUIDForCharacterAtIndex:(unsigned long long)arg1;
- (id)selectionForCharacterRanges:(id)arg1;
- (id)characterRangesForSelection:(id)arg1;
- (void)resetLocalReplicaClocksToTimestampValues;
- (void)_testSetTextTimestamp:(unsigned long long)arg1;
- (void)updateTimestampsInRange:(struct _NSRange)arg1;
- (void)moveRange:(struct _NSRange)arg1 toIndex:(unsigned long long)arg2;
- (struct TopoSubstring *)getSubstringBeforeTopoID:(struct TopoID)arg1;
- (void)getSubstrings:(vector_c5c053b6 *)arg1 forTopoIDRange:(struct TopoIDRange)arg2;
- (void)getCharacterRanges:(vector_7053a16b *)arg1 forSubstrings:(vector_c5c053b6 *)arg2;
- (unsigned long long)getCharacterIndexForCharID:(struct TopoID)arg1;
- (void)enumerateSubstrings:(CDUnknownBlockType)arg1;
- (_Bool)selection:(id)arg1 wasModifiedAfter:(id)arg2;
- (unsigned long long)mergeWithString:(id)arg1;
- (id)dotDescription:(unsigned long long)arg1;
- (id)initWithArchive:(const struct String *)arg1 andReplicaID:(id)arg2 withOrderedSubstrings:(vector_c5c053b6 *)arg3 timestamp:(id)arg4;
- (id)i_saveDeltasSinceTimestamp:(id)arg1 toArchive:(struct String *)arg2;
- (void)saveDeltaSinceTimestamp:(id)arg1 toArchive:(struct String *)arg2;
- (id)initWithArchive:(const struct String *)arg1 andReplicaID:(id)arg2 withOrderedSubstrings:(vector_c5c053b6 *)arg3;
- (void)saveSubstrings:(vector_c5c053b6 *)arg1 archiveSet:(unordered_set_0f32d0a8 *)arg2 linkSet:(unordered_set_0f32d0a8 *)arg3 archivedString:(id *)arg4 toArchive:(struct String *)arg5;
- (id)serializeDeltaSinceTimestamp:(id)arg1;
- (long long)substring:(struct TopoSubstring *)arg1 modifiedAfter:(id)arg2 includeAttributes:(_Bool)arg3;
- (void)enumerateRangesModifiedAfter:(id)arg1 includingAttributes:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;

@end

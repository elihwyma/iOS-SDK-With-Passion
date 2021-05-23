/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/TTVersionedDocument.h>

@class TTMergeableAttributedString;

@interface TTMergeableStringVersionedDocument : TTVersionedDocument

{
    TTMergeableAttributedString *_mergeableString;
}

@property (retain, nonatomic) TTMergeableAttributedString *mergeableString;

+ (unsigned int)serializationVersion;
+ (unsigned int)minimumSupportedVersion;

- (id)initWithMergeableString:(id)arg1;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;
- (unsigned long long)mergeWithStringVersionedDocument:(id)arg1;
- (id)initWithArchive:(const Document_22a49c75 *)arg1 andReplicaID:(id)arg2;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (id)serializeCurrentVersion:(unsigned int *)arg1;

@end

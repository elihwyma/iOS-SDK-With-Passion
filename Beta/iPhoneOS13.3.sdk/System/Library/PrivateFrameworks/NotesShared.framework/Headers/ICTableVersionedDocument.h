/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/TTVersionedDocument.h>

@class CRDocument, ICTable, NSUUID;

@interface ICTableVersionedDocument : TTVersionedDocument

{
    NSUUID *_replica;
    CRDocument *_innerTableDocument;
    ICTable *_table;
}

@property (retain, nonatomic) ICTable *table;
@property (readonly) CRDocument *innerTableDocument;
@property (nonatomic, readonly) NSUUID *replica;

+ (unsigned int)serializationVersion;
+ (unsigned int)minimumSupportedVersion;
+ (id)tableDoc;
+ (id)tableDocWithColumnCount:(unsigned long long)arg1 rowCount:(unsigned long long)arg2;

- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (id)serializeCurrentVersion:(unsigned int *)arg1;
- (void)setReplica:(id)arg1;
- (unsigned long long)mergeWithTableVersionedDocument:(id)arg1;

@end

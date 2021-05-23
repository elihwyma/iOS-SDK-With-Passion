/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/TTVersionedDocument.h>

@class CRDocument, CROrderedSet, NSUUID;

@interface ICCRDTIdentifierOrderedSetVersionedDocument : TTVersionedDocument

{
    NSUUID *_replica;
    CROrderedSet *_orderedSet;
    CRDocument *_document;
}

@property (retain, nonatomic) CROrderedSet *orderedSet;
@property (readonly) CRDocument *document;
@property (nonatomic, readonly) NSUUID *replica;

+ (unsigned int)serializationVersion;
+ (unsigned int)minimumSupportedVersion;

- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (id)serializeCurrentVersion:(unsigned int *)arg1;
- (unsigned long long)mergeWithIdentifierOrderedSetVersionedDocument:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/TTVectorTimestamp.h>

@class CRVectorTimestamp;

@interface TTCRVectorTimestamp : TTVectorTimestamp

{
    CRVectorTimestamp *_crTimestamp;
}

@property (retain, nonatomic) CRVectorTimestamp *crTimestamp;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)clockElementForUUID:(id)arg1;
- (void)setClock:(unsigned long long)arg1 forUUID:(id)arg2;
- (unsigned long long)clockForUUID:(id)arg1;
- (id)allUUIDs;
- (void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3;
- (id)sortedUUIDs;
- (unsigned long long)subclockForUUID:(id)arg1;

@end

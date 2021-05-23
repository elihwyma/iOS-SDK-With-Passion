/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface TTVectorMultiTimestamp : NSObject

{
    NSArray *_timestamps;
}

@property (retain, nonatomic) NSArray *timestamps;
@property (nonatomic, readonly) _Bool isDocumentShared;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)serialize;
- (unsigned long long)compareTo:(id)arg1;
- (void)saveToArchive:(VectorTimestamp_2287ec0f *)arg1;
- (void)mergeWithTimestamp:(id)arg1;
- (id)sortedUUIDs;
- (id)initWithTimestamps:(id)arg1;
- (id)clockElementForUUID:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)clockForUUID:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setClock:(unsigned long long)arg1 forUUID:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3 atIndex:(unsigned long long)arg4;
- (id)initWithData:(id)arg1 andCapacity:(unsigned long long)arg2;
- (id)initWithArchive:(const VectorTimestamp_2287ec0f *)arg1 andCapacity:(unsigned long long)arg2;

@end

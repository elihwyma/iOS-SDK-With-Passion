/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TTVectorTimestamp : NSObject

{
    NSMutableDictionary *_clock;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)serialize;
- (unsigned long long)compareTo:(id)arg1;
- (id)clockElementForUUID:(id)arg1;
- (void)saveToArchive:(VectorTimestamp_2287ec0f *)arg1;
- (void)setClock:(unsigned long long)arg1 forUUID:(id)arg2;
- (unsigned long long)clockForUUID:(id)arg1;
- (void)mergeWithTimestamp:(id)arg1;
- (id)allUUIDs;
- (void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3;
- (id)sortedUUIDs;
- (unsigned long long)subclockForUUID:(id)arg1;
- (void)incrementClockForUUID:(id)arg1;
- (id)initWithArchive:(const VectorTimestamp_2287ec0f *)arg1;

@end

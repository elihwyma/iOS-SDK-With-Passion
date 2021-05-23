/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

#import <NotesShared/Swift-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CRVectorTimestamp : NSObject <Swift>

{
    NSMutableDictionary *_clock;
}

@property (nonatomic, readonly) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)compare:(id)arg1;
- (id)tombstone;
- (id)shortDescription;
- (void)setDocument:(id)arg1;
- (id)clockElementForUUID:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)encodeIntoProtobufTimestamp:(VectorTimestamp_346eb33a *)arg1 coder:(id)arg2;
- (id)initWithProtobufTimestamp:(const VectorTimestamp_346eb33a *)arg1 decoder:(id)arg2;
- (void)setClock:(unsigned long long)arg1 forUUID:(id)arg2;
- (unsigned long long)clockForUUID:(id)arg1;
- (void)removeUUID:(id)arg1;
- (void)minusVectorTimestamp:(id)arg1;
- (id)allUUIDs;
- (void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3;
- (id)sortedUUIDs;
- (unsigned long long)subclockForUUID:(id)arg1;
- (void)incrementClockForUUID:(id)arg1;
- (id)timestampForReplica:(id)arg1;
- (void)maxClock:(unsigned long long)arg1 forUUID:(id)arg2;

@end

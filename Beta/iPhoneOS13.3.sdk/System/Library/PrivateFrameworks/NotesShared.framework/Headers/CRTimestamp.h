/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

#import <NotesShared/Swift-Protocol.h>

@class NSString, NSUUID;

@interface CRTimestamp : NSObject <Swift>

{
    NSUUID *_replica;
    long long _counter;
}

@property (retain, nonatomic) NSUUID *replica;
@property (nonatomic) long long counter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (id)tombstone;
- (id)shortDescription;
- (void)setDocument:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)encodeIntoProtobufTimestamp:(struct Timestamp *)arg1 coder:(id)arg2;
- (id)initWithProtobufTimestamp:(const struct Timestamp *)arg1 decoder:(id)arg2;
- (id)initWithReplica:(id)arg1 andCounter:(long long)arg2;
- (_Bool)isEqualToTimestamp:(id)arg1;
- (id)nextTimestampForReplica:(id)arg1;
- (id)nextTimestamp;
- (id)earlierTimestamp:(id)arg1;
- (id)laterTimestamp:(id)arg1;

@end

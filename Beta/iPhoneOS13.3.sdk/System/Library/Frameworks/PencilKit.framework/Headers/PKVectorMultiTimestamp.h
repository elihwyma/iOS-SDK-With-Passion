/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

#import <PencilKit/Swift-Protocol.h>

@class NSArray;

@interface PKVectorMultiTimestamp : NSObject <Swift>

{
    NSArray *_timestamps;
}

@property (nonatomic, readonly) NSArray *timestamps;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)serialize;
- (unsigned long long)compareTo:(id)arg1;
- (void)saveToArchive:(struct VectorTimestamp *)arg1;
- (void)mergeWithTimestamp:(id)arg1;
- (id)sortedUUIDs;
- (id)initWithTimestamps:(id)arg1;
- (id)clockElementForUUID:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)clockForUUID:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setClock:(unsigned long long)arg1 forUUID:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3 atIndex:(unsigned long long)arg4;
- (id)initWithData:(id)arg1 andCapacity:(unsigned long long)arg2;
- (id)initWithArchive:(const struct VectorTimestamp *)arg1 andCapacity:(unsigned long long)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <PASampling/PACountedFrame.h>

@class NSMutableSet, NSUUID;

@interface PAAggregatedInstruction : PACountedFrame

{
    NSMutableSet *_children;
    NSUUID *_binaryUuid;
    unsigned long long _offsetInBinary;
}

@property (retain) NSMutableSet *children;
@property (readonly) NSUUID *binaryUuid;
@property (readonly) unsigned long long offsetInBinary;
@property (readonly) _Bool isKernel;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)compare:(id)arg1;
- (id)initWithUUID:(id)arg1 andOffset:(unsigned long long)arg2 isKernel:(_Bool)arg3;

@end

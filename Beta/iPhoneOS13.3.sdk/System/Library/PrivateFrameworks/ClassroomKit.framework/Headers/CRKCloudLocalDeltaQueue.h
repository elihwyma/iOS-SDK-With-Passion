/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

#import <ClassroomKit/Swift-Protocol.h>

@class NSMutableArray;

@interface CRKCloudLocalDeltaQueue : NSObject <Swift>

{
    unsigned long long _size;
    NSMutableArray *_deltaQueue;
    unsigned long long _flightIndex;
}

@property (retain, nonatomic) NSMutableArray *deltaQueue;
@property (nonatomic) unsigned long long flightIndex;
@property (nonatomic) unsigned long long size;

+ (_Bool)supportsSecureCoding;
+ (id)queueWithQueue:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)pendingDeltas;
- (id)nextDelta;
- (void)enqueueDelta:(id)arg1;
- (void)dequeueDelta:(id)arg1;
- (void)purgePendingChangesWithRemoteDelta:(id)arg1;

@end

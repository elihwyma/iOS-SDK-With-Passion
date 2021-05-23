/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface MTLCommandQueueDescriptor : NSObject

@property (nonatomic) unsigned long long maxCommandBufferCount;
@property (nonatomic) unsigned long long qosLevel;
@property (nonatomic) NSObject<OS_dispatch_queue> *commitQueue;
@property (nonatomic) _Bool commitSynchronously;
@property (nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic) _Bool disableCrossQueueHazardTracking;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)commandQueueDescriptor;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end

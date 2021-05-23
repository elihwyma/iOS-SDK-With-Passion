/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol AVTUILogger, OS_dispatch_queue;

@interface AVTDeviceResourceManager : NSObject

{
    NSMutableArray *_consumers;
    id <AVTUILogger> _logger;
    NSObject<OS_dispatch_queue> *_stateLock;
}

@property (nonatomic, readonly) NSMutableArray *consumers;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)registerConsumer:(id)arg1;
- (void)unregisterConsumer:(id)arg1;
- (void)consumer:(id)arg1 willConsumeRenderingResourceForEstimatedDuration:(double)arg2;
- (id)initWithLogger:(id)arg1 lockProvider:(CDUnknownBlockType)arg2;
- (void)performWorkWithConsumers:(CDUnknownBlockType)arg1;

@end

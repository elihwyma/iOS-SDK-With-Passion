/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CKBlockingAsyncQueue : NSObject

{
    unsigned int _qosClass;
    unsigned long long _width;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_queueSema;
}

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned int qosClass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *queueSema;

- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)initWithWidth:(unsigned long long)arg1;
- (id)initWithWidth:(unsigned long long)arg1 qosClass:(unsigned int)arg2;
- (void)performBarrierBlock:(CDUnknownBlockType)arg1;

@end

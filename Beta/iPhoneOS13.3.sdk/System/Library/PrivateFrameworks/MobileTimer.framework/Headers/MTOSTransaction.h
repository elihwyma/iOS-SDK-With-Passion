/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface MTOSTransaction : NSObject

{
    NSObject<OS_os_transaction> *_transaction;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)transactionWithDescription:(id)arg1;
+ (id)transactionWithDescription:(id)arg1 timeout:(double)arg2;
+ (id)transactionWithDescription:(id)arg1 timeout:(double)arg2 timeoutBlock:(CDUnknownBlockType)arg3;

- (void)dealloc;
- (void)end;
- (void)_cancel;
- (id)initWithDescription:(id)arg1 timeout:(double)arg2 timeoutBlock:(CDUnknownBlockType)arg3;

@end

/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTObserverStore, NSString;

@protocol NAScheduler, OS_dispatch_queue;

@interface MTTimeListener : NSObject

{
    id <NAScheduler> _serializer;
    NSObject<OS_dispatch_queue> *_queue;
    MTObserverStore *_observers;
}

@property (retain, nonatomic) id <NAScheduler> serializer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) MTObserverStore *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)registerObserver:(id)arg1;
- (_Bool)handlesNotification:(id)arg1 ofType:(long long)arg2;
- (void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (double)assertionTimeOutForNotification:(id)arg1 ofType:(long long)arg2;
- (id)initWithCallbackScheduler:(id)arg1;

@end

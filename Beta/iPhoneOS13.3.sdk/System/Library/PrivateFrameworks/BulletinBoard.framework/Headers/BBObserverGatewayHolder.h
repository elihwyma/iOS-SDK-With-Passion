/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class BBMaskedSet, BBObserverClientProxy, NSMutableArray, NSString, PCPersistentTimer;

@protocol OS_dispatch_queue;

@interface BBObserverGatewayHolder : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    PCPersistentTimer *_timeoutTimer;
    NSMutableArray *_timeouts;
    BBObserverClientProxy *_gateway;
    unsigned long long _gatewayPriority;
    unsigned long long _feed;
    NSString *_name;
    BBMaskedSet *_observerFeedSet;
}

@property (retain, nonatomic) BBObserverClientProxy *gateway;
@property (nonatomic) unsigned long long gatewayPriority;
@property (nonatomic) unsigned long long feed;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) BBMaskedSet *observerFeedSet;

- (void)dealloc;
- (void)_invalidateTimer;
- (void)_handleTimeout;
- (void)sendObserversAddBulletin:(id)arg1 playLightsAndSirens:(_Bool)arg2 forFeeds:(unsigned long long)arg3;
- (id)initWithQueue:(id)arg1 name:(id)arg2;
- (void)sendAddBulletin:(id)arg1 playLightsAndSirens:(_Bool)arg2 forFeeds:(unsigned long long)arg3 withTimeout:(double)arg4 handler:(CDUnknownBlockType)arg5;
- (void)_startTimerWithFireDate:(id)arg1;
- (void)_startNextTimer;
- (id)_addTimeout:(double)arg1 forBulletinID:(id)arg2 inSectionID:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (_Bool)_invalidateTimeout:(id)arg1;
- (void)sendObserver:(id)arg1 addBulletin:(id)arg2 playLightsAndSirens:(_Bool)arg3 forFeeds:(unsigned long long)arg4 withHandler:(CDUnknownBlockType)arg5;

@end

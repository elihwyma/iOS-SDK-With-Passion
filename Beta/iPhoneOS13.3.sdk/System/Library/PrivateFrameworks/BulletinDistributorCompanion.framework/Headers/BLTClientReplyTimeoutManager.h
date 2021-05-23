/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, PCPersistentTimer;

@protocol OS_dispatch_queue;

@interface BLTClientReplyTimeoutManager : NSObject

{
    PCPersistentTimer *_clientReplyTimeoutTimer;
    NSMutableArray *_clientReplyTimeouts;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithQueue:(id)arg1;
- (void)_invalidateClientReplyTimer;
- (void)_startClientReplyTimerWithFireDate:(id)arg1;
- (void)_handleClientReplyTimeout;
- (void)_startNextClientReplyTimer;
- (void)_sortTimeouts;
- (_Bool)invalidateClientReplyTimeout:(id)arg1;
- (void)extendClientReplyTimeout:(id)arg1 additionalTime:(unsigned long long)arg2;
- (id)addClientReplyTimeoutForBulletin:(id)arg1 sectionID:(id)arg2 timeout:(double)arg3 handler:(CDUnknownBlockType)arg4;

@end

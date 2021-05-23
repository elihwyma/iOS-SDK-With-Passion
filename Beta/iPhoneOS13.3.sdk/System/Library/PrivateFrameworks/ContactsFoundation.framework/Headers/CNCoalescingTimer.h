/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class CNUnfairLock;

@protocol CNCancelable, CNScheduler;

@interface CNCoalescingTimer : NSObject

{
    _Bool _open;
    _Bool _someoneWaiting;
    id <CNCancelable> _scheduledToken;
    id <CNScheduler> _downstreamScheduler;
    CNUnfairLock *_resourceLock;
    id <CNScheduler> _delayScheduler;
    CDUnknownBlockType _block;
    double _delay;
    unsigned long long _options;
}

@property (retain, nonatomic) id <CNCancelable> scheduledToken;
@property (nonatomic, readonly) CNUnfairLock *resourceLock;
@property (nonatomic, readonly) id <CNScheduler> delayScheduler;
@property (nonatomic, readonly) id <CNScheduler> downstreamScheduler;
@property (copy, nonatomic, readonly) CDUnknownBlockType block;
@property (nonatomic, readonly) double delay;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic) _Bool open;
@property (nonatomic, getter=isSomeoneWaiting) _Bool someoneWaiting;

+ (id)os_log;

- (void)dealloc;
- (id)initWithDelay:(double)arg1 options:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3 schedulerProvider:(id)arg4 downstreamScheduler:(id)arg5;
- (void)handleEvent;
- (_Bool)nts_isDoorOpened;
- (void)nts_letSomeoneIn;
- (void)nts_closeDoor;
- (void)nts_makeSomeoneWait;
- (void)nts_openDoor;

@end

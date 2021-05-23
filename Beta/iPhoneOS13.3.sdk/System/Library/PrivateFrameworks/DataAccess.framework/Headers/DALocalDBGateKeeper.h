/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString;

@protocol DADataclassLockWatcher;

@interface DALocalDBGateKeeper : NSObject

{
    _Bool _claimedOwnershipOfContacts;
    _Bool _claimedOwnershipOfEvents;
    _Bool _claimedOwnershipOfNotes;
    id <DADataclassLockWatcher> _contactsLockHolder;
    NSMutableArray *_contactsWaiters;
    NSMutableSet *_waiterIDsExpectingContactsLock;
    id <DADataclassLockWatcher> _eventsLockHolder;
    NSMutableArray *_eventsWaiters;
    NSMutableSet *_waiterIDsExpectingEventsLock;
    id <DADataclassLockWatcher> _notesLockHolder;
    NSMutableArray *_notesWaiters;
    NSMutableSet *_waiterIDsExpectingNotesLock;
    NSString *_unitTestHackRunLoopMode;
}

@property (nonatomic) _Bool claimedOwnershipOfContacts;
@property (retain, nonatomic) id <DADataclassLockWatcher> contactsLockHolder;
@property (retain, nonatomic) NSMutableArray *contactsWaiters;
@property (retain, nonatomic) NSMutableSet *waiterIDsExpectingContactsLock;
@property (nonatomic) _Bool claimedOwnershipOfEvents;
@property (retain, nonatomic) id <DADataclassLockWatcher> eventsLockHolder;
@property (retain, nonatomic) NSMutableArray *eventsWaiters;
@property (retain, nonatomic) NSMutableSet *waiterIDsExpectingEventsLock;
@property (nonatomic) _Bool claimedOwnershipOfNotes;
@property (retain, nonatomic) id <DADataclassLockWatcher> notesLockHolder;
@property (retain, nonatomic) NSMutableArray *notesWaiters;
@property (retain, nonatomic) NSMutableSet *waiterIDsExpectingNotesLock;
@property (retain, nonatomic) NSString *unitTestHackRunLoopMode;

+ (id)sharedGateKeeper;

- (id)init;
- (void)dealloc;
- (id)stateString;
- (void)claimedOwnershipOfDataclasses:(long long)arg1;
- (_Bool)_canWakenWaiter:(id)arg1;
- (void)_abortWaiterForWrappers:(id)arg1;
- (void)_setUnitTestHackRunLoopMode:(id)arg1;
- (void)_notifyWaitersForDataclasses:(id)arg1;
- (void)_registerWaiter:(id)arg1 forDataclassLocks:(long long)arg2 preempt:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)relinquishLocksForWaiter:(id)arg1 dataclasses:(long long)arg2 moreComing:(_Bool)arg3;
- (void)_sendAllClearNotifications;
- (void)registerPreemptiveWaiter:(id)arg1 forDataclassLocks:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)registerWaiter:(id)arg1 forDataclassLocks:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)unregisterWaiterForDataclassLocks:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <EmailFoundation/EFPriorityDesignator.h>

@class MFError, MFInvocationQueue, MFMailboxUid, NSMutableSet, NSString, NSThread;

@interface MFActivityMonitor : EFPriorityDesignator

{
    NSThread *_runningThread;
    NSString *_taskName;
    NSString *_displayName;
    NSString *_statusMessage;
    NSString *_descriptionString;
    MFInvocationQueue *_ourQueue;
    double _percentDone;
    unsigned int _key:13;
    unsigned int _canCancel:1;
    unsigned int _shouldCancel:1;
    unsigned int _isActive:1;
    unsigned int _changeCount:8;
    id _delegate;
    id _target;
    MFError *_error;
    unsigned long long _expectedLength;
    unsigned long long _maxCount;
    unsigned long long _currentCount;
    double _currentItemPercentDone;
    unsigned int _supportsPerItemProgress:1;
    MFMailboxUid *_mailbox;
    double _lastTime;
    double _startTime;
    unsigned long long _gotNewMessagesState;
    unsigned long long _bytesRead;
    unsigned long long _bytesWritten;
    NSMutableSet *_reasons;
    NSMutableSet *_associatedCancelables;
    _Bool _isRemoteSearch;
}

@property (retain) MFMailboxUid *mailbox;
@property (nonatomic) _Bool canBeCancelled;
@property (nonatomic) _Bool shouldCancel;
@property (nonatomic) _Bool isRemoteSearch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)currentMonitor;
+ (void)destroyMonitor;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)error;
- (_Bool)isActive;
- (void)cancel;
- (void)setError:(id)arg1;
- (int)changeCount;
- (void)reset;
- (id)displayName;
- (id)reasons;
- (void)addReason:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (double)startTime;
- (void)_didChange;
- (void)setMaxCount:(unsigned long long)arg1;
- (id)statusMessage;
- (void)addCancelable:(id)arg1;
- (void)setStatusMessage:(id)arg1;
- (unsigned long long)bytesRead;
- (void)resetConnectionStats;
- (void)postActivityStarting;
- (void)postActivityFinished:(id)arg1;
- (id)userInfoForNotification;
- (void)postDidChangeWithUserInfo:(id)arg1;
- (id)_ntsThrottledUserInfoDict;
- (void)setSupportsPerItemProgress:(_Bool)arg1;
- (double)percentDone;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2 withKey:(int)arg3;
- (void)setPercentDone:(double)arg1 withKey:(int)arg2;
- (void)setDisplayName:(id)arg1 maxCount:(unsigned long long)arg2;
- (void)addActivityTarget:(id)arg1;
- (_Bool)_lockedAddActivityTarget:(id)arg1;
- (void)removeActivityTarget:(id)arg1;
- (id)primaryTarget;
- (void)setPrimaryTarget:(id)arg1;
- (void)_cancelAssociatedCancelables;
- (void)cancelMessage;
- (void)setStatusMessage:(id)arg1 withKey:(int)arg2;
- (void)startActivity;
- (void)finishedActivity:(id)arg1;
- (void)notifyConnectionEstablished;
- (void)setCurrentCount:(unsigned long long)arg1;
- (void)setPercentDoneOfCurrentItem:(double)arg1;
- (void)setGotNewMessagesState:(unsigned long long)arg1;
- (unsigned long long)gotNewMessagesState;
- (_Bool)hasReason:(id)arg1;
- (void)setPercentDone:(double)arg1;
- (void)setExpectedLength:(unsigned long long)arg1;
- (unsigned long long)expectedLength;
- (void)setActivityTarget:(id)arg1;
- (id)activityTarget;
- (void)addActivityTargets:(id)arg1;
- (id)activityTargets;
- (void)removeCancelable:(id)arg1;
- (void)setInvocationQueue:(id)arg1;
- (int)acquireExclusiveAccessKey;
- (void)relinquishExclusiveAccessKey:(int)arg1;
- (void)recordBytesRead:(unsigned long long)arg1;
- (void)recordBytesWritten:(unsigned long long)arg1;
- (unsigned long long)bytesWritten;
- (id)taskName;
- (void)setTaskName:(id)arg1;

@end

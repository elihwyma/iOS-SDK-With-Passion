/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <Foundation/NSObject.h>

#import <CoreDAV/Swift-Protocol.h>

@class NSError, NSMutableSet, NSString;

@protocol CoreDAVAccountInfoProvider, CoreDAVTaskGroupDelegate, CoreDAVTaskManager;

@interface CoreDAVTaskGroup : NSObject <Swift>

{
    id <CoreDAVTaskManager> _taskManager;
    id <CoreDAVAccountInfoProvider> _accountInfoProvider;
    double _timeoutInterval;
    NSMutableSet *_outstandingTasks;
    _Bool _isCancelling;
    _Bool _isTearingDown;
    _Bool _isFinished;
    id <CoreDAVTaskGroupDelegate> _delegate;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    NSError *_error;
    id _context;
}

@property (retain, nonatomic) NSError *error;
@property (weak, nonatomic) id <CoreDAVTaskGroupDelegate> delegate;
@property (nonatomic) double timeoutInterval;
@property (copy, nonatomic) CDUnknownBlockType progressBlock;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (retain, nonatomic) id context;
@property (weak, nonatomic) id <CoreDAVTaskManager> taskManager;
@property (weak, nonatomic) id <CoreDAVAccountInfoProvider> accountInfoProvider;
@property (nonatomic, readonly) NSMutableSet *outstandingTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancelTaskGroup;
- (void)startTaskGroup;
- (void)finishEarlyWithError:(id)arg1;
- (void)finishCoreDAVTaskGroupWithError:(id)arg1 delegateCallbackBlock:(CDUnknownBlockType)arg2;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)bailWithError:(id)arg1;
- (void)submitWithTaskManager:(id)arg1;
- (void)syncAway;
- (void)_tearDownAllTasks;
- (void)finishCoreDAVTaskGroupWithError:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol BKSAlternateSystemAppDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface BKSAlternateSystemApp : NSObject

{
    _Bool _stateChangeWaiter;
    id <BKSAlternateSystemAppDelegate> _delegate;
    NSString *_bundleId;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    long long _state;
    NSObject<OS_dispatch_semaphore> *_stateChangeSemaphore;
}

@property (copy, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long state;
@property (nonatomic) _Bool stateChangeWaiter;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *stateChangeSemaphore;
@property (weak, nonatomic) id <BKSAlternateSystemAppDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)terminate;
- (void)activate;
- (id)initWithBundleId:(id)arg1;
- (void)didBlockSystemAppForAlternateSystemApp;
- (void)didUnblockSystemAppForAlternateSystemApp;
- (void)alternateSystemAppWithBundleID:(id)arg1 failedToOpenWithResult:(id)arg2;
- (void)alternateSystemAppWithBundleID:(id)arg1 didExitWithContext:(id)arg2;
- (void)alternateSystemAppWithBundleIDDidOpen:(id)arg1;
- (void)alternateSystemAppWithBundleIDDidTerminate:(id)arg1;
- (void)_queue_ensureConnection;
- (void)_queue_changeState:(long long)arg1;
- (void)_waitForState:(long long)arg1;
- (void)_queue_invalidate;
- (void)_handleInterruptedConnection;
- (void)_handleInvalidatedConnection;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BKSAlternateSystemAppClientProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol BKSAlternateSystemAppDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface BKSAlternateSystemApp : NSObject <BKSAlternateSystemAppClientProtocol>
{
    BOOL _stateChangeWaiter;
    id <BKSAlternateSystemAppDelegate> _delegate;
    NSString *_bundleId;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    long long _state;
    NSObject<OS_dispatch_semaphore> *_stateChangeSemaphore;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *stateChangeSemaphore; // @synthesize stateChangeSemaphore=_stateChangeSemaphore;
@property(nonatomic) BOOL stateChangeWaiter; // @synthesize stateChangeWaiter=_stateChangeWaiter;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(nonatomic) __weak id <BKSAlternateSystemAppDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)alternateSystemAppWithBundleIDDidTerminate:(id)arg1;
- (void)alternateSystemAppWithBundleIDDidOpen:(id)arg1;
- (void)alternateSystemAppWithBundleID:(id)arg1 didExitWithContext:(id)arg2;
- (void)alternateSystemAppWithBundleID:(id)arg1 failedToOpenWithResult:(id)arg2;
- (void)didUnblockSystemAppForAlternateSystemApp;
- (void)didBlockSystemAppForAlternateSystemApp;
- (void)_handleInvalidatedConnection;
- (void)_handleInterruptedConnection;
- (void)_queue_invalidate;
- (void)_waitForState:(long long)arg1;
- (void)_queue_changeState:(long long)arg1;
- (void)_queue_ensureConnection;
- (void)terminate;
- (void)activate;
- (void)dealloc;
- (id)initWithBundleId:(id)arg1;

@end


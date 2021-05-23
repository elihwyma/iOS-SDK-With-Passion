/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class MSVTaskAssertion, NSString, NSXPCConnection;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _MLChangeObserver : NSObject

{
    _Bool _timedOut;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    MSVTaskAssertion *_taskAssertion;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;
@property (retain, nonatomic) MSVTaskAssertion *taskAssertion;
@property (nonatomic, getter=hasTimedOut) _Bool timedOut;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)observerWithConnection:(id)arg1;

- (void)dealloc;
- (void)performDatabasePathChange:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)emergencyDisconnectWithCompletion:(CDUnknownBlockType)arg1;
- (void)terminateForFailureToPerformDatabasePathChange;
- (void)tearDownTaskAssertion;
- (void)tearDownTimeoutTimer;
- (void)setupTaskAssertion;
- (void)setupTimeoutTimer;

@end

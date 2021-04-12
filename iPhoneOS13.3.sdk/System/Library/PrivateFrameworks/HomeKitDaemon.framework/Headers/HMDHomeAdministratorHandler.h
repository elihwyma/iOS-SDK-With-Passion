//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMessageDispatcher.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHome, NSMapTable, NSOperationQueue;
@protocol HMFLocking;

@interface HMDHomeAdministratorHandler : HMFMessageDispatcher <HMFLogging>
{
    id <HMFLocking> _lock;
    NSOperationQueue *_queue;
    NSMapTable *_receivers;
    HMDHome *_home;
}

+ (id)logCategory;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
// - (void).cxx_destruct;
- (id)logIdentifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)addOperation:(id)arg1;
- (id)operationForMessage:(id)arg1 error:(id )arg2;
- (void)deregisterReceiver:(id)arg1;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 selector:(SEL)arg4;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 messageHandler:(id /* CDUnknownBlockType */)arg4;
- (id)syncOperationManager;
@property(readonly) HMFMessageDispatcher *dispatcher;
- (id)initWithHome:(id)arg1;
- (id)initWithTransport:(id)arg1;

@end


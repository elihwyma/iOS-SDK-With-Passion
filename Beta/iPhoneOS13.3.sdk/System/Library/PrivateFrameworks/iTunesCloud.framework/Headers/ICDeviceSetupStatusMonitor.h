/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface ICDeviceSetupStatusMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_pendingBuddyCompleteBlocks;
    NSMutableArray *_pendingSetupCompleteBlocks;
    _Bool _setupAssistantRunning;
    int _setupAssistantFinishedNotifyToken;
    int _setupAssistantLaunchedNotifyToken;
}

@property (nonatomic, readonly, getter=isSetupAssistantRunning) _Bool setupAssistantRunning;
@property (nonatomic, readonly, getter=isDeviceSetupComplete) _Bool deviceSetupComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedMonitor;

- (void)dealloc;
- (id)_init;
- (void)_runAllPendingBlocksOfType:(long long)arg1;
- (void)nanoPairedDeviceStatusMonitor:(id)arg1 didChangeClientSyncState:(unsigned long long)arg2;
- (void)performBlockAfterBuddySetup:(CDUnknownBlockType)arg1;
- (void)performBlockAfterDeviceSetup:(CDUnknownBlockType)arg1;

@end

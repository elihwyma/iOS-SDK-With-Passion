/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFMACAddress, HMFUnfairLock, NSObject, NSString;

@protocol HMFWiFiManagerDataSource, OS_dispatch_queue;

@interface HMFWiFiManager

{
    HMFUnfairLock *_lock;
    _Bool _shouldAssertWoW;
    NSString *_currentNetworkSSID;
    HMFMACAddress *_MACAddress;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <HMFWiFiManagerDataSource> _dataSource;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) id <HMFWiFiManagerDataSource> dataSource;
@property (nonatomic) _Bool shouldAssertWoW;
@property (copy, nonatomic) NSString *currentNetworkSSID;
@property (copy, readonly) HMFMACAddress *MACAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (id)initWithWorkQueue:(id)arg1 dataSource:(id)arg2;
- (void)currentNetworkDidChangeForDataSource:(id)arg1;
- (void)dataSource:(id)arg1 didChangeWoWState:(_Bool)arg2;
- (void)dataSource:(id)arg1 didChangeLinkAvailability:(_Bool)arg2;
- (void)takeWoWAssertion;
- (void)releaseWoWAssertion;

@end

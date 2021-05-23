/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMFUnfairLock, HMMutableArray, NSArray, NSString, NSUUID, _HMContext;

@protocol HMAccessoryBrowserDelegate, OS_dispatch_queue;

@interface HMAccessoryBrowser : NSObject

{
    HMFUnfairLock *_lock;
    _Bool _browsing;
    id <HMAccessoryBrowserDelegate> _delegate;
    _HMContext *_context;
    NSUUID *_uuid;
    HMMutableArray *_accessories;
    unsigned long long _generationCounter;
}

@property (nonatomic, readonly) _HMContext *context;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) HMMutableArray *accessories;
@property (nonatomic) unsigned long long generationCounter;
@property (nonatomic, getter=isBrowsing) _Bool browsing;
@property (weak, nonatomic) id <HMAccessoryBrowserDelegate> delegate;
@property (copy, nonatomic, readonly) NSArray *discoveredAccessories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;

- (id)init;
- (void)dealloc;
- (void)_start;
- (void)stopSearchingForNewAccessories;
- (void)startSearchingForNewAccessories;
- (void)_registerNotificationHandlers;
- (void)handleStartWithError:(id)arg1 response:(id)arg2;
- (void)_startSearchingForNewAccessories;
- (void)_fetchNewAccessoriesWithPrivacyCheck;
- (void)_stopSearchingForNewAccessories;
- (void)_updateNewAccessories:(id)arg1;
- (void)_fetchNewAccessories;
- (void)_handleNewAccessoriesFound:(id)arg1;
- (void)_handleNewAccessoriesRemoved:(id)arg1;

@end

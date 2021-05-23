/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class FMFSession, NAFuture, NSHashTable, NSString;

@interface HULocationDeviceManager : NSObject

{
    FMFSession *_fmfSession;
    NAFuture *_activeFMFDeviceFuture;
    NAFuture *_availableFMFDevicesFuture;
    NSHashTable *_observers;
}

@property (nonatomic, readonly) FMFSession *fmfSession;
@property (retain, nonatomic) NAFuture *activeFMFDeviceFuture;
@property (retain, nonatomic) NAFuture *availableFMFDevicesFuture;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic, readonly) NAFuture *availableLocationDevicesFuture;
@property (nonatomic, readonly) NAFuture *activeLocationDeviceFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didUpdateActiveDeviceList:(id)arg1;
- (id)updateActiveLocationDevice:(id)arg1;
- (void)_updateActiveFMFDevice:(id)arg1;

@end

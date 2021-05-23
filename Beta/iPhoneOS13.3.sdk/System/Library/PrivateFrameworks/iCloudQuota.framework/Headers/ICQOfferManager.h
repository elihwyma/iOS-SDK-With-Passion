/*
 Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

#import <Foundation/NSObject.h>

@class ICQOffer, NSNumber, NSTimer;

@protocol OS_dispatch_queue;

@interface ICQOfferManager : NSObject

{
    NSObject<OS_dispatch_queue> *_cachedOfferQueue;
    ICQOffer *_cachedOffer;
    NSTimer *_invalidationTimer;
    _Bool _isRegisteredForDarwinNotifications;
}

@property (nonatomic, readonly) _Bool isDeviceStorageAlmostFull;
@property (nonatomic, getter=isSimulatedDeviceStorageAlmostFull) _Bool simulatedDeviceStorageAlmostFull;
@property (retain, nonatomic) NSNumber *simulatedPhotosLibrarySize;
@property (nonatomic, readonly) NSNumber *photosLibrarySize;
@property (nonatomic, getter=isBuddyOfferEnabled) _Bool buddyOfferEnabled;
@property (retain, nonatomic) ICQOffer *cachedOffer;

+ (id)sharedOfferManager;
+ (id)ckBackupDeviceID;
+ (id)stringWithPlaceholderFormat:(id)arg1 alternateString:(id)arg2;
+ (id)defaultPlaceholderKeys;
+ (id)defaultBundleIdentifier;
+ (_Bool)buddyOfferMightNeedPresenting;
+ (_Bool)_legacyBuddyOfferMightNeedPresenting;

- (id)init;
- (void)dealloc;
- (void)_registerForDarwinNotifications;
- (void)getOfferWithCompletion:(CDUnknownBlockType)arg1;
- (void)postOfferType:(id)arg1;
- (void)postBuddyOfferType:(id)arg1;
- (void)forcePostFollowup;
- (void)teardownCachedOffer;
- (void)teardownCachedBuddyOffer;
- (void)teardownCachedOffers;
- (void)getOfferForBundleIdentifier:(id)arg1 offerContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_teardownInvalidationTimer;
- (void)_unregisterForDarwinNotifications;
- (id)currentOfferForBundleIdentifier:(id)arg1;
- (void)getOfferForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getOfferForAccount:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_getOfferForAccount:(id)arg1 bundleIdentifier:(id)arg2 offerContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_shouldUseOffer:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_funnelCloudServerOfferForAccount:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)_setupTimerForInvalidationDate:(id)arg1;
- (void)_refetchOffer;
- (void)_firedInvalidationTimer:(id)arg1;
- (id)currentOffer;
- (_Bool)fetchOfferIfNeeded;
- (void)_handlePushReceivedDarwinNotification;
- (void)clearFollowups;
- (void)updateOfferId:(id)arg1 buttonId:(id)arg2 info:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

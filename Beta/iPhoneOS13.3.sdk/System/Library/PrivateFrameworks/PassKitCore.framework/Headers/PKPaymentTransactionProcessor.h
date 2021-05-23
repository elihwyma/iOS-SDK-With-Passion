/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class CLGeocoder, CLLocationManager, NSMutableArray, NSMutableSet, NSString, PKMerchantCategoryCodeMap, PKUsageNotificationServer;

@protocol OS_dispatch_source, PKPaymentTransactionProcessorDelegate;

@interface PKPaymentTransactionProcessor : NSObject

{
    struct os_unfair_lock_s _itemsLock;
    NSMutableSet *_locationUpdateItems;
    NSMutableSet *_backgroundLocationUpdateItems;
    NSMutableArray *_reverseGeocodeItems;
    NSMutableSet *_stationsUpdateItems;
    NSMutableArray *_merchantCleanupItems;
    CLLocationManager *_locationManager;
    CLLocationManager *_backgroundMerchantLocationManager;
    CLGeocoder *_geocoder;
    NSObject<OS_dispatch_source> *_locationUpdateTimeoutTimer;
    NSObject<OS_dispatch_source> *_backgroundLocationUpdateTimer;
    _Bool _active;
    _Bool _processingMerchantCleanupItems;
    PKMerchantCategoryCodeMap *_categoryCodeMap;
    id <PKPaymentTransactionProcessorDelegate> _delegate;
    PKUsageNotificationServer *_usageNotificationServer;
}

@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (weak, nonatomic) id <PKPaymentTransactionProcessorDelegate> delegate;
@property (weak, nonatomic) PKUsageNotificationServer *usageNotificationServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)_updateActiveState;
- (void)processPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3;
- (void)_processPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3;
- (void)_processPaymentTransactionForDemoMode:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3;
- (void)_updateLocation:(id)arg1 forLocationUpdateItem:(id)arg2 andMarkAsProcessed:(_Bool)arg3;
- (void)_abortUpdatingLocationForLocationUpdateItem:(id)arg1;
- (void)_stopUpdatingLocationIfPossible;
- (void)_abortUpdatingLocationForAllLocationUpdateItems;
- (void)_abortUpdatingLocationForAllBackgroundLocationUpdateItems;
- (void)_processPaymentTransactionForLocationUpdate:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3;
- (id)_pendingReverseGeocodeUpdateItemForTransaction:(id)arg1;
- (void)_processPaymentTransactionForStationsUpdate:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3;
- (void)_processPaymentTransactionForMerchantCleanup:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 clearingAttempt:(_Bool)arg4;
- (void)_markTransactionAsFullyProcessedAndNotifyDelegate:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3;
- (void)_beginProcessingPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 skipLocation:(_Bool)arg4;
- (id)_pendingLocationUpdateItemForTransaction:(id)arg1;
- (void)_continueUpdatingLocationForTransactionUpdateItem:(id)arg1;
- (void)_startUpdatingBackgroundLocationIfPossible;
- (void)_startUpdatingLocationIfPossible;
- (void)_beginReverseGeocodingIfPossible;
- (void)_processItemForStationsCleanup:(id)arg1;
- (void)_reportTransactionWithFinalLocation:(id)arg1;
- (id)_pendingStationsUpdateItemForTransaction:(id)arg1;
- (void)_processItemForMerchantCleanup:(id)arg1 clearingAttempt:(_Bool)arg2;
- (id)_pendingMerchantCleanupItemForTransaction:(id)arg1;
- (void)_beginMerchantCleanupIfPossible;
- (void)_processForLocalMCCLookup:(id)arg1;

@end

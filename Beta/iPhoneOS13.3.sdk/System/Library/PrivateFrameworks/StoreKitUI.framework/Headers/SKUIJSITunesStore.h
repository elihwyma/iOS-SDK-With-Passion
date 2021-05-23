/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <ITMLKit/IKJSITunesStore.h>

@class NSString, SKUIClientContext, SKUIJSAppleAccount, SKUIJSRestrictions;

@interface SKUIJSITunesStore : IKJSITunesStore

{
    SKUIClientContext *_clientContext;
    _Bool _isAppPreview;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long applicationIconBadgeNumber;
@property (nonatomic, readonly) SKUIJSAppleAccount *primaryAppleAccount;
@property (nonatomic, readonly) SKUIJSRestrictions *restrictions;
@property (copy, nonatomic, readonly) NSString *hostApp;
@property (nonatomic, readonly) _Bool isAppPreview;

- (void)dealloc;
- (void)log:(id)arg1;
- (void)itemStateCenterMediaLibrariesDidChange:(id)arg1;
- (id)initWithAppContext:(id)arg1 clientContext:(id)arg2;
- (void)_purchaseRequestDidSucceedNotification:(id)arg1;
- (void)_finishPurchaseForOptions:(id)arg1 purchaseResponse:(id)arg2;
- (void)_finishSoftwarePurchaseForOptions:(id)arg1 purchaseResponse:(id)arg2;
- (id)_rentalInfoFromMediaItems:(id)arg1;
- (id)_millisecondsFromTimeInterval:(double)arg1;
- (void)buy:(id)arg1;
- (void)getAdminStatus:(id)arg1:(id)arg2;
- (void)approveInPerson:(id)arg1:(id)arg2;
- (_Bool)areVideosCloudPurchasesEnabled;
- (void)attemptLocalAskToBuyApproval:(id)arg1;
- (void)download:(id)arg1;
- (void)downloadExistsFor:(id)arg1:(id)arg2;
- (void)exit:(id)arg1;
- (void)findApps:(id)arg1:(id)arg2:(id)arg3;
- (void)findLibraryItems:(id)arg1:(id)arg2:(id)arg3;
- (void)findOwnedItems:(id)arg1:(id)arg2;
- (void)findToggleStateForItem:(id)arg1:(id)arg2;
- (void)clearToggleStateItems;
- (void)getBookSample:(id)arg1;
- (void)getProfilePermissions:(id)arg1:(id)arg2;
- (void)isInstalledApp:(id)arg1:(id)arg2;
- (void)isRemovedSystemApp:(id)arg1:(id)arg2;
- (void)launchICloudFamilySettings;
- (void)loadGratisContent:(id)arg1;
- (void)headsUp:(id)arg1:(id)arg2;
- (void)resetStateForActiveDocument;
- (_Bool)resourceExists:(id)arg1;
- (void)setPreviewOverlay:(id)arg1:(id)arg2;
- (void)restoreRemovedSystemApp:(id)arg1:(id)arg2;
- (void)updateToggleStateForItem:(id)arg1 toggled:(_Bool)arg2:(id)arg3;
- (void)loadRentals:(id)arg1;
- (void)loadRental:(id)arg1:(id)arg2;
- (void)fetchTemplates:(id)arg1:(id)arg2;
- (id)documentSizeForNavigationDocument:(id)arg1;
- (void)fetchMSOProviderStatus:(id)arg1;
- (void)sendApplicationDidEnterBackground;
- (void)sendApplicationWillEnterForeground;
- (void)sendOnNavigationStackWillPop:(_Bool)arg1;
- (void)sendOnPageResponseWithDocument:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4;
- (_Bool)sendOnXEventWithDictionary:(id)arg1;
- (_Bool)sendAppPreviewStateChanged:(_Bool)arg1;
- (void)sendApplicationWindowSizeDidUpdate:(struct CGSize)arg1;
- (_Bool)sendOnShowPageEventType:(id)arg1 data:(id)arg2;
- (void)_displayWifiConnectionRequiredAlert;

@end

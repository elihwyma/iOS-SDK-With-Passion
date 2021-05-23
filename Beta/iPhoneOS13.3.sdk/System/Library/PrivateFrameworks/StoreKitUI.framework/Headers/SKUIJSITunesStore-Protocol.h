/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/Swift-Protocol.h>

@class NSString, SKUIJSAppleAccount, SKUIJSRestrictions;

@protocol SKUIJSITunesStore <Swift>

@property (nonatomic) long long applicationIconBadgeNumber;
@property (nonatomic, readonly) SKUIJSAppleAccount *primaryAppleAccount;
@property (nonatomic, readonly) SKUIJSRestrictions *restrictions;
@property (copy, nonatomic, readonly) NSString *hostApp;
@property (nonatomic, readonly) _Bool isAppPreview;

- (unsigned short)log: /* Error: Ran out of types for this method. */;
- (unsigned short)buy: /* Error: Ran out of types for this method. */;
- (unsigned short)getAdminStatus:: /* Error: Ran out of types for this method. */;
- (unsigned short)approveInPerson:: /* Error: Ran out of types for this method. */;
- (unsigned short)areVideosCloudPurchasesEnabled;
- (unsigned short)attemptLocalAskToBuyApproval: /* Error: Ran out of types for this method. */;
- (unsigned short)download: /* Error: Ran out of types for this method. */;
- (unsigned short)downloadExistsFor:: /* Error: Ran out of types for this method. */;
- (unsigned short)exit: /* Error: Ran out of types for this method. */;
- (unsigned short)findApps::: /* Error: Ran out of types for this method. */;
- (unsigned short)findLibraryItems::: /* Error: Ran out of types for this method. */;
- (unsigned short)findOwnedItems:: /* Error: Ran out of types for this method. */;
- (unsigned short)findToggleStateForItem:: /* Error: Ran out of types for this method. */;
- (unsigned short)clearToggleStateItems;
- (unsigned short)getBookSample: /* Error: Ran out of types for this method. */;
- (unsigned short)getProfilePermissions:: /* Error: Ran out of types for this method. */;
- (unsigned short)isInstalledApp:: /* Error: Ran out of types for this method. */;
- (unsigned short)isRemovedSystemApp:: /* Error: Ran out of types for this method. */;
- (unsigned short)launchICloudFamilySettings;
- (unsigned short)loadGratisContent: /* Error: Ran out of types for this method. */;
- (unsigned short)headsUp:: /* Error: Ran out of types for this method. */;
- (unsigned short)resetStateForActiveDocument;
- (unsigned short)resourceExists: /* Error: Ran out of types for this method. */;
- (unsigned short)setPreviewOverlay:: /* Error: Ran out of types for this method. */;
- (unsigned short)restoreRemovedSystemApp:: /* Error: Ran out of types for this method. */;
- (unsigned short)updateToggleStateForItem:toggled:: /* Error: Ran out of types for this method. */;
- (unsigned short)loadRentals: /* Error: Ran out of types for this method. */;
- (unsigned short)loadRental:: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchTemplates:: /* Error: Ran out of types for this method. */;
- (unsigned short)documentSizeForNavigationDocument: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchMSOProviderStatus: /* Error: Ran out of types for this method. */;

@end

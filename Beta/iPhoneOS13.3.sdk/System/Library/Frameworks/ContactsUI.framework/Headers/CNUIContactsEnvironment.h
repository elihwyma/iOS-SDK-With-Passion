/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNCollation, CNContactChangesNotifier, CNContactStore, CNContactsEnvironment, CNFavorites, CNGeminiManager, CNHealthStoreManager, CNUICoreRecentsManager, CNUIExternalComponentsFactory, CNUIIDSAvailabilityProvider, CNUIMeContactMonitor, CNUISchedulerProvider, CNUIUserActivityManager;

@protocol CNCapabilities, CNLSApplicationWorkspace, CNUIApplicationLaunchCheckin, CNUIDefaultUserActionFetcher, CNUILikenessRendering, CNUIPRLikenessResolver, CNUIPlaceholderProviderFactory, CNUIUserActionDiscoveringEnvironment;

@interface CNUIContactsEnvironment : NSObject

{
    id <CNUIApplicationLaunchCheckin> _launchCheckinRegistrar;
    CNUISchedulerProvider *_defaultSchedulerProvider;
    CNContactStore *_contactStore;
    CNContactStore *_inProcessContactStore;
    CNFavorites *_inProcessFavorites;
    CNUIUserActivityManager *_inProcessActivityManager;
    id <CNUIPlaceholderProviderFactory> _placeholderProviderFactory;
    CNUIMeContactMonitor *_meMonitor;
    id <CNUIPRLikenessResolver> _cachingLikenessResolver;
    id <CNUILikenessRendering> _cachingLikenessRenderer;
    id <CNUILikenessRendering> _cachingMonogramRenderer;
    id <CNUIUserActionDiscoveringEnvironment> _actionDiscoveringEnvironment;
    CNUIIDSAvailabilityProvider *_idsAvailabilityProvider;
    id <CNLSApplicationWorkspace> _applicationWorkspace;
    id <CNCapabilities> _capabilities;
    id <CNUIDefaultUserActionFetcher> _defaultUserActionFetcher;
    CNContactChangesNotifier *_contactChangesNotifier;
    CNUICoreRecentsManager *_recentsManager;
    CNUIExternalComponentsFactory *_componentsFactory;
    struct UCollator *_sortCollator;
    CNCollation *_collation;
    CNHealthStoreManager *_healthStoreManager;
    CNGeminiManager *_geminiManager;
    CNContactsEnvironment *_cnEnvironment;
}

@property (retain, nonatomic) CNUISchedulerProvider *defaultSchedulerProvider;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNContactStore *inProcessContactStore;
@property (retain, nonatomic) CNFavorites *inProcessFavorites;
@property (retain, nonatomic) CNUIUserActivityManager *inProcessActivityManager;
@property (retain, nonatomic) id <CNUIPlaceholderProviderFactory> placeholderProviderFactory;
@property (retain, nonatomic) CNUIMeContactMonitor *meMonitor;
@property (retain, nonatomic) id <CNUIPRLikenessResolver> cachingLikenessResolver;
@property (retain, nonatomic) id <CNUILikenessRendering> cachingLikenessRenderer;
@property (retain, nonatomic) id <CNUILikenessRendering> cachingMonogramRenderer;
@property (retain, nonatomic) id <CNUIUserActionDiscoveringEnvironment> actionDiscoveringEnvironment;
@property (retain, nonatomic) CNUIIDSAvailabilityProvider *idsAvailabilityProvider;
@property (retain, nonatomic) id <CNLSApplicationWorkspace> applicationWorkspace;
@property (retain, nonatomic) id <CNCapabilities> capabilities;
@property (retain, nonatomic) id <CNUIDefaultUserActionFetcher> defaultUserActionFetcher;
@property (retain, nonatomic) CNContactChangesNotifier *contactChangesNotifier;
@property (retain, nonatomic) CNUICoreRecentsManager *recentsManager;
@property (retain, nonatomic) CNUIExternalComponentsFactory *componentsFactory;
@property (nonatomic) struct UCollator *sortCollator;
@property (retain, nonatomic) CNCollation *collation;
@property (retain, nonatomic) CNHealthStoreManager *healthStoreManager;
@property (retain, nonatomic) CNGeminiManager *geminiManager;
@property (nonatomic, readonly) CNContactsEnvironment *cnEnvironment;
@property (retain, nonatomic) id <CNUIApplicationLaunchCheckin> launchCheckinRegistrar;

+ (id)currentEnvironment;
+ (id)makeCurrentEnvironment;

- (id)init;
- (void)dealloc;
- (id)initWithContactsEnvironment:(id)arg1;
- (id)nts_lazyContactStore;
- (id)nts_lazyInProcessContactStore;
- (id)nts_lazyDefaultSchedulerProvider;
- (id)nts_lazyPlaceholderProviderFactory;
- (id)nts_lazyCachingLikenessResolver;
- (id)nts_makeCachingLikenessResolver;
- (id)nts_lazyCachingLikenessRenderer;
- (id)nts_lazyCachingMonogramRenderer;
- (id)nts_lazyActionDiscoveringEnvironment;
- (id)nts_makeActionDiscoveringEnvironment;
- (id)nts_lazyIDSAvailabilityProvider;
- (id)nts_lazyApplicationWorkspace;
- (id)nts_lazyCapabilities;
- (id)nts_lazyDefaultUserActionFetcher;
- (id)nts_lazyContactChangesNotifier;
- (id)nts_makeContactChangesNotifier;
- (id)nts_lazyRecentsManager;
- (id)nts_makeRecentsManager;
- (id)nts_lazyComponentsFactory;
- (id)nts_lazyInProcessActivityManager;
- (id)nts_lazyInProcessFavorites;
- (id)nts_lazyCollation;
- (struct UCollator *)nts_lazySortCollator;
- (id)nts_lazyHealthStoreManager;
- (id)nts_lazyGeminiManager;

@end

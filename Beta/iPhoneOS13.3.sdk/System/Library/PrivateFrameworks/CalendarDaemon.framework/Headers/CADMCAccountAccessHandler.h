/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@protocol CADACAccountsProvider, CADCalCalendarInfoProvider, CADCalStoreInfoProvider, CADManagedConfigurationHandler, CADPermissionValidator, OS_dispatch_queue;

@interface CADMCAccountAccessHandler : NSObject

{
    NSString *_bundleIdentifier;
    id <CADACAccountsProvider> _accountsProvider;
    id <CADManagedConfigurationHandler> _managedConfigHandler;
    unsigned long long _accountManagement;
    id <CADCalStoreInfoProvider> _calStoreInfoProvider;
    id <CADCalCalendarInfoProvider> _calCalendarInfoProvider;
    id <CADPermissionValidator> _permissionValidator;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSMutableDictionary *_cachedRestrictedStoreInfos;
    NSArray *_cachedAccounts;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) id <CADACAccountsProvider> accountsProvider;
@property (nonatomic, readonly) id <CADManagedConfigurationHandler> managedConfigHandler;
@property (nonatomic, readonly) unsigned long long accountManagement;
@property (nonatomic, readonly) id <CADCalStoreInfoProvider> calStoreInfoProvider;
@property (nonatomic, readonly) id <CADCalCalendarInfoProvider> calCalendarInfoProvider;
@property (nonatomic, readonly) id <CADPermissionValidator> permissionValidator;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cacheQueue;
@property (retain, nonatomic) NSMutableDictionary *cachedRestrictedStoreInfos;
@property (retain, nonatomic) NSArray *cachedAccounts;

- (void)reset;
- (id)_cachedAccounts;
- (_Bool)isAccountManaged:(id)arg1;
- (_Bool)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2;
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1;
- (id)initWithCalStoreInfoProvider:(id)arg1 calendarInfoProvider:(id)arg2 accountsProvider:(id)arg3 permissionValidator:(id)arg4 managedConfigHandler:(id)arg5 accountManagement:(unsigned long long)arg6 bundleIdentifier:(id)arg7;
- (void)_validateAction:(unsigned long long)arg1;
- (_Bool)_isDisabledForAction:(unsigned long long)arg1;
- (_Bool)_existingCalStoreMapsToAccountIdentifier:(id)arg1;
- (id)_restrictedCalStoreInfosForAction:(unsigned long long)arg1;
- (id)_restrictedCalendarRowIDsForAction:(unsigned long long)arg1;
- (_Bool)_mayShowLocalAccountsForAction:(unsigned long long)arg1;
- (id)_filteredAccountsForAction:(unsigned long long)arg1 withUnfilteredAccounts:(id)arg2;

@end

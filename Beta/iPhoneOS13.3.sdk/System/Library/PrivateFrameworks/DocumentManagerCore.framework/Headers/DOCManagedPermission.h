/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

#import <Foundation/NSObject.h>

@class ACAccountStore, NSCache, NSString;

@interface DOCManagedPermission : NSObject

{
    _Bool _isEphemeralMultiUser;
    _Bool _mayOpenFromManagedToUnmanaged;
    _Bool _mayOpenFromUnmanagedToManaged;
    _Bool _isManagedAppsCloudSyncDisallowed;
    _Bool _hasOpenInRestrictions;
    _Bool _isUSBAccessAllowed;
    _Bool _isNetworkDriveAccessInFilesAllowed;
    _Bool _didLoadSharedConnectionValues;
    NSString *_hostIdentifier;
    unsigned long long _hostAccountDataOwnerState;
    NSCache *_cache;
    NSCache *_appContainerIDCache;
    ACAccountStore *_accountStore;
}

@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSCache *appContainerIDCache;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) NSString *hostIdentifier;
@property (nonatomic) unsigned long long hostAccountDataOwnerState;
@property (nonatomic, readonly) _Bool isInEducationMode;
@property (nonatomic, readonly) _Bool hasOpenInRestrictions;
@property (nonatomic, readonly) _Bool isUSBAccessAllowed;
@property (nonatomic, readonly) _Bool isNetworkDriveAllowed;

+ (id)defaultPermission;

- (id)init;
- (void)dealloc;
- (_Bool)isEphemeralMultiUser;
- (id)queueFileDataForAcceptance:(id)arg1 originalFileName:(id)arg2 forBundleID:(id)arg3 outError:(id *)arg4;
- (_Bool)mayOpenFromManagedToUnmanaged;
- (_Bool)mayOpenFromUnmanagedToManaged;
- (_Bool)canCopySourceIsContentManaged:(_Bool)arg1;
- (_Bool)canHostAppPerformAction:(unsigned long long)arg1 fileProviderDomain:(id)arg2;
- (id)defaultFileProviderForAppBundle:(id)arg1;
- (_Bool)canAppWithBundleIdentifier:(id)arg1 performAction:(unsigned long long)arg2 bundleIdentifier:(id)arg3;
- (_Bool)canHostAppPerformAction:(unsigned long long)arg1 targetItem:(id)arg2;
- (void)_loadSharedConnectionValues;
- (_Bool)isManagedAppsCloudSyncDisallowed;
- (void)resetAllCachedPermissions;
- (_Bool)hasAnyEffectiveRestrictions;
- (unsigned long long)dataOwnerStateForBundleIdentifier:(id)arg1;
- (unsigned long long)dataOwnerStateForAccountIdentifier:(id)arg1;
- (_Bool)isManagedAppsCloudSyncAllowed;
- (_Bool)canAppWithDataOwnerState:(unsigned long long)arg1 performAction:(unsigned long long)arg2 dataOwnerState:(unsigned long long)arg3;
- (_Bool)canHostAppPerformAction:(unsigned long long)arg1 bundleIdentifier:(id)arg2;
- (_Bool)canAppWithDataOwnerState:(unsigned long long)arg1 performAction:(unsigned long long)arg2 item:(id)arg3;
- (_Bool)canAppWithBundleIdentifier:(id)arg1 performAction:(unsigned long long)arg2 accountIdentifier:(id)arg3;
- (unsigned long long)dataOwnerStateForItem:(id)arg1;
- (id)appContainerBundleIDForFPItem:(id)arg1;
- (_Bool)canHostAppPerformAction:(unsigned long long)arg1 legacyPickerExtension:(id)arg2;
- (_Bool)canHostAppPerformAction:(unsigned long long)arg1 accountIdentifier:(id)arg2;
- (_Bool)canItem:(id)arg1 performAction:(unsigned long long)arg2 item:(id)arg3;
- (_Bool)canCopyfromContainingBundleIdentifer:(id)arg1;
- (_Bool)canCopyItems:(id)arg1;
- (void)cleanAppContainerBundleIDCache;
- (id)allowedFileProviderBundleIdentifiersForHostBundleIdentifier:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
 */

#import <Foundation/NSObject.h>

@class FPProviderDomain, LSApplicationProxy, NSArray, NSDate, NSString, PSUsageBundleApp;

@interface STStorageApp : NSObject

{
    long long _purgeableSize;
    _Bool _isDeleting;
    _Bool _isDemoting;
    _Bool _isApple;
    _Bool _isUserApp;
    _Bool _isSystemApp;
    _Bool _isInternalApp;
    _Bool _isDocumentApp;
    _Bool _specialSizePending;
    _Bool _isPseudoApp;
    NSString *_appIdentifier;
    FPProviderDomain *_fpDomain;
    NSString *_name;
    NSString *_bundleIdentifier;
    PSUsageBundleApp *_usageBundleApp;
    NSArray *_mediaTypes;
    long long _externalDataSize;
    long long _sharedDataSize;
    long long _specialSize;
    long long _coreMLDataSize;
}

@property (retain) NSString *appIdentifier;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSString *name;
@property (nonatomic, readonly) LSApplicationProxy *appProxy;
@property (retain) FPProviderDomain *fpDomain;
@property (readonly) NSString *bundleVersion;
@property (readonly) NSString *vendorName;
@property (readonly) NSString *versionString;
@property (readonly) NSArray *documents;
@property (readonly) long long purgeableSize;
@property (readonly) long long staticSize;
@property (readonly) long long dynamicSize;
@property (readonly) long long dataSize;
@property (readonly) long long totalSize;
@property (readonly) _Bool isDeletable;
@property (readonly) _Bool isDemotable;
@property (readonly) _Bool isDemoted;
@property (readonly) _Bool isDeleted;
@property (readonly) _Bool isUsageApp;
@property _Bool isUserApp;
@property _Bool isSystemApp;
@property _Bool isInternalApp;
@property _Bool isDocumentApp;
@property _Bool specialSizePending;
@property (readonly) NSDate *lastUsedDate;
@property (readonly) NSDate *installDate;
@property (retain) PSUsageBundleApp *usageBundleApp;
@property (retain, nonatomic) NSArray *mediaTypes;
@property long long externalDataSize;
@property long long sharedDataSize;
@property long long specialSize;
@property long long coreMLDataSize;
@property _Bool isPseudoApp;

+ (void)notifyAppsUpdated;
+ (void)_notifyAppsUpdated:(id)arg1;
+ (void)setLaunchDatesNeedUpdating;

- (id)initWithApplicationProxy:(id)arg1;
- (id)initWithApplicationIdentifier:(id)arg1;
- (void)reloadProxy;
- (void)updateSpecialSize;

@end

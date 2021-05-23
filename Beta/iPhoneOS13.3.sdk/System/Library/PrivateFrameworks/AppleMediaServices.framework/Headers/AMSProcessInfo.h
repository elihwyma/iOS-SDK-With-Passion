/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSMappedBundleInfo, NSData, NSString, NSURL;

@protocol OS_dispatch_queue;

@interface AMSProcessInfo : NSObject

{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_partnerHeader;
    NSString *_accountMediaType;
    NSData *_auditTokenData;
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_clientVersion;
    NSString *_executableName;
    NSString *_localizedName;
    NSString *_proxyAppBundleID;
    AMSMappedBundleInfo *_mappedBundleInfo;
}

@property (nonatomic, readonly) AMSMappedBundleInfo *mappedBundleInfo;
@property (retain, nonatomic) NSString *accountMediaType;
@property (retain, nonatomic) NSData *auditTokenData;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSURL *bundleURL;
@property (retain, nonatomic) NSString *clientVersion;
@property (retain, nonatomic) NSString *executableName;
@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *partnerHeader;
@property (retain, nonatomic) NSString *proxyAppBundleID;

+ (_Bool)supportsSecureCoding;
+ (id)valueForEntitlement:(id)arg1;
+ (id)currentProcess;
+ (_Bool)isBuddyRunning;
+ (id)_cachedProcessInfoForIdentifier:(id)arg1;
+ (void)copyPropertiesFrom:(id)arg1 to:(id)arg2;
+ (id)bundleForIdentifier:(id)arg1;
+ (void)_cacheProcessInfo:(id)arg1;
+ (id)_currentProcessBundleIdentifier;
+ (id)defaultMediaTypeForCurrentProcess;
+ (id)defaultMediaTypeAccessQueue;
+ (void)_accessProcessInfoCache:(CDUnknownBlockType)arg1;
+ (_Bool)boolForEntitlement:(id)arg1;
+ (_Bool)boolForMachLookupAccess:(id)arg1;
+ (void)setDefaultMediaTypeForCurrentProcess:(id)arg1;
+ (id)stringForEntitlement:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)generateConfiguration;
- (id)generateConfigurationFromBag:(id)arg1;
- (id)generateConfigurationFromBagContract:(id)arg1;

@end

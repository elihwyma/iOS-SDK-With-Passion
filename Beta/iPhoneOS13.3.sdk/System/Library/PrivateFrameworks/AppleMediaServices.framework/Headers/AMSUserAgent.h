/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSMappedBundleInfo, AMSProcessInfo, NSString;

@interface AMSUserAgent : NSObject

{
    AMSMappedBundleInfo *_bundleInfo;
    AMSProcessInfo *_processInfo;
}

@property (nonatomic, readonly) AMSMappedBundleInfo *bundleInfo;
@property (nonatomic, readonly) AMSProcessInfo *processInfo;
@property (retain, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSString *clientVersion;

+ (id)userAgentForProcessInfo:(id)arg1;
+ (id)_sharedCache;
+ (id)cachedUserAgentForBundleIdentifier:(id)arg1;
+ (void)cacheUserAgent:(id)arg1 forBundleIdentifier:(id)arg2;

- (id)initWithProcessInfo:(id)arg1;
- (id)_compileAndShouldCache:(_Bool *)arg1;
- (id)_sharedComponentFairPlayDeviceType;
- (id)_iOSComponentClientInfo;
- (id)_iOSComponentProductVersion;
- (id)_iOSComponentDeviceModel;
- (id)_iOSComponentHardwarePlatform;
- (id)_iOSComponentBuildVersion;
- (id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)arg1;
- (id)_sharedComponentFrameworkVersion;
- (id)compile;

@end

/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@interface SKUIApplicationControllerOptions : NSObject <Swift>

{
    _Bool _supportsFullApplicationReload;
    long long _tabBarControllerStyle;
    _Bool _pageRenderMetricsEnabled;
    _Bool _requiresLocalBootstrapScript;
    _Bool _bootstrapScriptFallbackEnabled;
    double _bootstrapScriptFallbackMaximumAge;
    double _bootstrapScriptTimeoutInterval;
    _Bool _useTransientStorageForTests;
}

@property (nonatomic, readonly) _Bool supportsFullApplicationReload;
@property (nonatomic, readonly) long long tabBarControllerStyle;
@property (nonatomic, readonly) _Bool pageRenderMetricsEnabled;
@property (nonatomic, readonly) _Bool requiresLocalBootstrapScript;
@property (nonatomic, readonly, getter=isBootstrapScriptFallbackEnabled) _Bool bootstrapScriptFallbackEnabled;
@property (nonatomic, readonly) double bootstrapScriptFallbackMaximumAge;
@property (nonatomic, readonly) double bootstrapScriptTimeoutInterval;
@property (nonatomic, readonly) _Bool useTransientStorageForTests;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

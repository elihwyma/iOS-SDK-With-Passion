/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIApplicationControllerOptions.h>

@interface SKUIMutableApplicationControllerOptions : SKUIApplicationControllerOptions

@property (nonatomic) _Bool supportsFullApplicationReload;
@property (nonatomic) long long tabBarControllerStyle;
@property (nonatomic) _Bool pageRenderMetricsEnabled;
@property (nonatomic) _Bool requiresLocalBootstrapScript;
@property (nonatomic, getter=isBootstrapScriptFallbackEnabled) _Bool bootstrapScriptFallbackEnabled;
@property (nonatomic) double bootstrapScriptFallbackMaximumAge;
@property (nonatomic) double bootstrapScriptTimeoutInterval;
@property (nonatomic) _Bool useTransientStorageForTests;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end

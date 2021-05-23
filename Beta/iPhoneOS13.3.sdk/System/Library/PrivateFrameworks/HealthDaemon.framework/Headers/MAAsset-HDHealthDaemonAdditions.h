/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <MobileAsset/MAAsset.h>

@interface MAAsset (HDHealthDaemonAdditions)

@property (nonatomic, readonly) long long hd_availability;
@property (nonatomic, readonly) long long hd_contentVersion;
@property (nonatomic, readonly) long long hd_compatibilityVersion;

@end

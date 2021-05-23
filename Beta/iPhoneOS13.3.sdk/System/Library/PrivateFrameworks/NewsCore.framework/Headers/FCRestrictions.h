/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@interface FCRestrictions : NSObject

{
    _Bool _testing;
    long long _buildVersionNumber;
    long long _isExplicitContentAllowedOverride;
}

@property (nonatomic) _Bool testing;
@property (nonatomic) long long isExplicitContentAllowedOverride;
@property (nonatomic) long long buildVersionNumber;
@property (nonatomic, readonly) _Bool isExplicitContentAllowed;
@property (nonatomic, readonly) _Bool isDiagnosticsUsageEnabled;

+ (id)sharedInstance;
+ (long long)integerRepresentationOfShortVersionString:(id)arg1;

- (id)init;
- (_Bool)isContentAllowedInStorefrontID:(id)arg1 withAllowedStorefrontIDs:(id)arg2 blockedStorefrontIDs:(id)arg3;
- (_Bool)isContentBlockedInStorefrontID:(id)arg1 withAllowedStorefrontIDs:(id)arg2 blockedStorefrontIDs:(id)arg3;
- (void)t_startForcingExplicitContentDisallowed;
- (void)t_stopForcingExplicitContentDisallowed;
- (_Bool)isNewsVersionAllowed:(long long)arg1;

@end

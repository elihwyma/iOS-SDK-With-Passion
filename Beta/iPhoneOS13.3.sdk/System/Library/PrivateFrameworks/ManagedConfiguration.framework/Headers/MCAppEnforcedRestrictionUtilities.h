/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@interface MCAppEnforcedRestrictionUtilities : NSObject

+ (id)currentCountryCode;
+ (id)appUnavailableInRegionRestrictionForBundleID:(id)arg1;
+ (id)enforcedRestrictionsForBundleID:(id)arg1 restrictionPlistURL:(id)arg2 countryCode:(id)arg3;
+ (id)clientUUIDForBundleID:(id)arg1;

@end

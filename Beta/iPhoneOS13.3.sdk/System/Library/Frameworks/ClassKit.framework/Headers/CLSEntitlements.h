/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface CLSEntitlements : NSObject

{
    NSString *_applicationBundleIdentifier;
    NSDictionary *_entitlements;
}

@property (copy, nonatomic, readonly) NSDictionary *entitlements;
@property (nonatomic, readonly) NSString *applicationBundleIdentifier;
@property (nonatomic, readonly) NSString *classKitEnvironment;

+ (id)entitlementsForCurrentTaskWithError:(id *)arg1;
+ (id)entitlementsWithConnection:(id)arg1 error:(id *)arg2;
+ (id)allowedEntitlements;
+ (id)entitlementsWithSecTask:(struct __SecTask *)arg1 overrides:(id)arg2 error:(id *)arg3;
+ (_Bool)isInternalProcess;
+ (_Bool)isPrivateSearchEnabledProcess;
+ (_Bool)isDashboardAppProcess;
+ (_Bool)isSearchEnabledProcess;

- (id)init;
- (_Bool)hasEntitlement:(id)arg1;
- (_Bool)isInternal;
- (id)initWithEntitlements:(id)arg1;
- (_Bool)boolValueForEntitlement:(id)arg1 error:(id *)arg2;
- (id)stringValueForEntitlement:(id)arg1 error:(id *)arg2;
- (_Bool)isPrivateSearchAPIEnabled;
- (_Bool)isPublicClassKitAPIEnabled;
- (_Bool)isDashboardAPIEnabled;
- (_Bool)isRegisterDashboardEnabled;
- (_Bool)isSearchAPIEnabled;
- (_Bool)isInDevelopmentEnvironment;

@end

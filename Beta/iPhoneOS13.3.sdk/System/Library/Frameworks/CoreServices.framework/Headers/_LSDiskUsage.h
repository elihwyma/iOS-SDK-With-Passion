/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSMutableDictionary, NSNumber, NSString;

@interface _LSDiskUsage : NSObject

{
    NSString *_bundleIdentifier;
    NSMutableDictionary *_usage;
    id _validationToken;
}

@property (nonatomic, readonly) NSNumber *staticUsage;
@property (nonatomic, readonly) NSNumber *dynamicUsage;
@property (nonatomic, readonly) NSNumber *onDemandResourcesUsage;
@property (nonatomic, readonly) NSNumber *sharedUsage;

+ (_Bool)supportsSecureCoding;
+ (id)propertyQueue;
+ (id)_serverQueue;
+ (id)mobileInstallationQueue;
+ (id)ODRConnection;
+ (id)usageFromMobileInstallationForBundleIdentifier:(id)arg1 error:(id *)arg2;
+ (id)ODRUsageForBundleIdentifier:(id)arg1 error:(id *)arg2;

- (id)init;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithBundleIdentifier:(id)arg1 alreadyKnownUsage:(id)arg2 validationToken:(id)arg3;
- (_Bool)_fetchWithXPCConnection:(id)arg1 error:(id *)arg2;
- (void)removeAllCachedUsageValues;
- (_Bool)fetchServerSideWithConnection:(id)arg1 error:(id *)arg2;
- (_Bool)fetchClientSideWithError:(id *)arg1;

@end

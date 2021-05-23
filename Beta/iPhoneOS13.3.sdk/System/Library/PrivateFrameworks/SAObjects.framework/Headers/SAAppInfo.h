/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, SAGlance, SASiriSupport, SAStarkSupport, SASyncAppIdentifyingInfo;

@interface SAAppInfo : SADomainObject

@property (copy, nonatomic) NSString *adamId;
@property (copy, nonatomic) NSString *appId;
@property (retain, nonatomic) SASyncAppIdentifyingInfo *appIdentifyingInfo;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSDictionary *appNameMap;
@property (copy, nonatomic) NSArray *appNameSynonyms;
@property (copy, nonatomic) NSDictionary *appNameSynonymsMap;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) _Bool betaApp;
@property (copy, nonatomic) NSString *carPlayAlternativeDisplayName;
@property (copy, nonatomic) NSDictionary *carPlayAlternativeDisplayNameMap;
@property (copy, nonatomic) NSString *containerName;
@property (copy, nonatomic) NSString *displayAppName;
@property (copy, nonatomic) NSDictionary *displayAppNameMap;
@property (retain, nonatomic) SAGlance *glance;
@property (nonatomic) _Bool hasSiriIntegration;
@property (nonatomic) _Bool hidden;
@property (nonatomic) _Bool isMacApp;
@property (nonatomic) _Bool isNanoApp;
@property (copy, nonatomic) NSNumber *nowPlayingAppWithBrowsableContent;
@property (copy, nonatomic) NSString *providerName;
@property (retain, nonatomic) SASiriSupport *siriSupport;
@property (copy, nonatomic) NSString *spokenName;
@property (copy, nonatomic) NSDictionary *spokenNameMap;
@property (copy, nonatomic) NSString *spotlightName;
@property (copy, nonatomic) NSDictionary *spotlightNameMap;
@property (retain, nonatomic) SAStarkSupport *starkSupport;
@property (copy, nonatomic) NSArray *supportedCommands;
@property (copy, nonatomic) NSArray *supportedSchemes;
@property (nonatomic) _Bool supportsUniversalSearchSubscription;

+ (id)appInfo;
+ (id)appInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end

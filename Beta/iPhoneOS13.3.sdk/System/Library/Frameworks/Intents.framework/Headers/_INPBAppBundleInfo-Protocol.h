/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBAppId, _INPBBuildId;

@protocol _INPBAppBundleInfo <Swift>

@property (retain, nonatomic) _INPBAppId *appId;
@property (nonatomic, readonly) _Bool hasAppId;
@property (retain, nonatomic) _INPBBuildId *buildId;
@property (nonatomic, readonly) _Bool hasBuildId;
@property (copy, nonatomic) NSArray *intentSupports;
@property (nonatomic, readonly) unsigned long long intentSupportsCount;
@property (copy, nonatomic) NSArray *localizedProjects;
@property (nonatomic, readonly) unsigned long long localizedProjectsCount;
@property (copy, nonatomic) NSArray *supportedPlatforms;
@property (nonatomic, readonly) unsigned long long supportedPlatformsCount;

+ (unsigned short)intentSupportType;
+ (unsigned short)localizedProjectsType;
+ (unsigned short)supportedPlatformsType;

- (unsigned short)clearIntentSupports;
- (unsigned short)addIntentSupport: /* Error: Ran out of types for this method. */;
- (unsigned short)intentSupportAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearLocalizedProjects;
- (unsigned short)addLocalizedProjects: /* Error: Ran out of types for this method. */;
- (unsigned short)localizedProjectsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearSupportedPlatforms;
- (unsigned short)addSupportedPlatforms: /* Error: Ran out of types for this method. */;
- (unsigned short)supportedPlatformsAtIndex: /* Error: Ran out of types for this method. */;

@end

/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBAppId, _INPBBuildId;

@protocol _INPBAppBuild <Swift>

@property (retain, nonatomic) _INPBAppId *appId;
@property (nonatomic, readonly) _Bool hasAppId;
@property (retain, nonatomic) _INPBBuildId *buildId;
@property (nonatomic, readonly) _Bool hasBuildId;

@end

/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString;

@protocol _INPBBuildId <Swift>

@property (copy, nonatomic) NSString *buildNumber;
@property (nonatomic, readonly) _Bool hasBuildNumber;
@property (copy, nonatomic) NSString *versionNumber;
@property (nonatomic, readonly) _Bool hasVersionNumber;

@end

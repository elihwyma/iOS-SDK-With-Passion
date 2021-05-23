/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString;

@protocol _INPBAppIdentifier <Swift>

@property (copy, nonatomic) NSString *appName;
@property (nonatomic, readonly) _Bool hasAppName;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic, readonly) _Bool hasBundleIdentifier;
@property (copy, nonatomic) NSString *bundleVersion;
@property (nonatomic, readonly) _Bool hasBundleVersion;

@end

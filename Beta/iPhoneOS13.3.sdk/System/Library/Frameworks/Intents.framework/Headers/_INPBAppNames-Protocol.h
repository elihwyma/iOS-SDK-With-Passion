/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString;

@protocol _INPBAppNames <Swift>

@property (copy, nonatomic) NSString *appName;
@property (nonatomic, readonly) _Bool hasAppName;
@property (copy, nonatomic) NSString *axSpokenName;
@property (nonatomic, readonly) _Bool hasAxSpokenName;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic, readonly) _Bool hasDisplayName;
@property (copy, nonatomic) NSString *spotlightName;
@property (nonatomic, readonly) _Bool hasSpotlightName;

@end

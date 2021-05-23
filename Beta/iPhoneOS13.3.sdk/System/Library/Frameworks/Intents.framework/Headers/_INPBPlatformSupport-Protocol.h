/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString;

@protocol _INPBPlatformSupport <Swift>

@property (copy, nonatomic) NSString *minimumOsVersion;
@property (nonatomic, readonly) _Bool hasMinimumOsVersion;
@property (nonatomic) int supportedPlatform;
@property (nonatomic) _Bool hasSupportedPlatform;

- (unsigned short)supportedPlatformAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsSupportedPlatform: /* Error: Ran out of types for this method. */;

@end

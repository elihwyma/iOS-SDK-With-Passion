/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString;

@protocol INCacheableObject <Swift>

@property (copy, nonatomic, readonly) NSString *cacheIdentifier;

+ (unsigned short)buildFromCachePayload:identifier:completion: /* Error: Ran out of types for this method. */;

- (unsigned short)generateCachePayloadWithCompletion: /* Error: Ran out of types for this method. */;

@end

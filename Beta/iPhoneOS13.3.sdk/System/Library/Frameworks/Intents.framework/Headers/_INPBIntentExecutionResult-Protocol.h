/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString;

@protocol _INPBIntentExecutionResult <Swift>

@property (copy, nonatomic) NSString *encodedIntent;
@property (nonatomic, readonly) _Bool hasEncodedIntent;
@property (copy, nonatomic) NSString *encodedIntentResponse;
@property (nonatomic, readonly) _Bool hasEncodedIntentResponse;
@property (nonatomic) int encodingFormat;
@property (nonatomic) _Bool hasEncodingFormat;

- (unsigned short)encodingFormatAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsEncodingFormat: /* Error: Ran out of types for this method. */;

@end

/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBAppIdentifier;

@protocol _INPBIntentExecutionRequest <Swift>

@property (retain, nonatomic) _INPBAppIdentifier *appIdentifier;
@property (nonatomic, readonly) _Bool hasAppIdentifier;
@property (copy, nonatomic) NSString *encodedIntent;
@property (nonatomic, readonly) _Bool hasEncodedIntent;
@property (copy, nonatomic) NSString *encodedIntentDefinition;
@property (nonatomic, readonly) _Bool hasEncodedIntentDefinition;
@property (nonatomic) int encodingFormat;
@property (nonatomic) _Bool hasEncodingFormat;

- (unsigned short)encodingFormatAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsEncodingFormat: /* Error: Ran out of types for this method. */;

@end

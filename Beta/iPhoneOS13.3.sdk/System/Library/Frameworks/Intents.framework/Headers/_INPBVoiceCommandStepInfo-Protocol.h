/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString;

@protocol _INPBVoiceCommandStepInfo <Swift>

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (nonatomic, readonly) _Bool hasApplicationIdentifier;
@property (nonatomic) int category;
@property (nonatomic) _Bool hasCategory;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasName;

- (unsigned short)categoryAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsCategory: /* Error: Ran out of types for this method. */;

@end

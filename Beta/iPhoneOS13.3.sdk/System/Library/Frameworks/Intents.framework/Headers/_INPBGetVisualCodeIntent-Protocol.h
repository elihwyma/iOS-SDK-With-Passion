/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBIntentMetadata;

@protocol _INPBGetVisualCodeIntent <Swift>

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic) int visualCodeType;
@property (nonatomic) _Bool hasVisualCodeType;

- (unsigned short)visualCodeTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsVisualCodeType: /* Error: Ran out of types for this method. */;

@end

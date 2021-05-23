/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBHomeAttributeValue;

@protocol _INPBHomeAttribute <Swift>

@property (nonatomic) int attributeType;
@property (nonatomic) _Bool hasAttributeType;
@property (retain, nonatomic) _INPBHomeAttributeValue *attributeValue;
@property (nonatomic, readonly) _Bool hasAttributeValue;

- (unsigned short)attributeTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsAttributeType: /* Error: Ran out of types for this method. */;

@end

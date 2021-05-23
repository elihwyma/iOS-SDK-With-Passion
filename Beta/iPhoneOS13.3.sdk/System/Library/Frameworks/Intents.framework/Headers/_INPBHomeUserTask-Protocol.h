/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBHomeAttributeValue;

@protocol _INPBHomeUserTask <Swift>

@property (nonatomic) int attribute;
@property (nonatomic) _Bool hasAttribute;
@property (nonatomic) int taskType;
@property (nonatomic) _Bool hasTaskType;
@property (retain, nonatomic) _INPBHomeAttributeValue *value;
@property (nonatomic, readonly) _Bool hasValue;

- (unsigned short)taskTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsTaskType: /* Error: Ran out of types for this method. */;
- (unsigned short)attributeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsAttribute: /* Error: Ran out of types for this method. */;

@end

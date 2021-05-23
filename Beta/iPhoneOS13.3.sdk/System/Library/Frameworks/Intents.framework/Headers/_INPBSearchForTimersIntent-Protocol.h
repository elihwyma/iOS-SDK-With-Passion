/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBDataString, _INPBIntentMetadata;

@protocol _INPBSearchForTimersIntent <Swift>

@property (nonatomic) double duration;
@property (nonatomic) _Bool hasDuration;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBDataString *label;
@property (nonatomic, readonly) _Bool hasLabel;
@property (nonatomic) int state;
@property (nonatomic) _Bool hasState;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasType;

- (unsigned short)typeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsType: /* Error: Ran out of types for this method. */;
- (unsigned short)stateAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsState: /* Error: Ran out of types for this method. */;

@end

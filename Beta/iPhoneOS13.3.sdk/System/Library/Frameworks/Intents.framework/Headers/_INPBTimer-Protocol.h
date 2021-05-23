/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDataString;

@protocol _INPBTimer <Swift>

@property (nonatomic) double duration;
@property (nonatomic) _Bool hasDuration;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) _INPBDataString *label;
@property (nonatomic, readonly) _Bool hasLabel;
@property (nonatomic) double remainingTime;
@property (nonatomic) _Bool hasRemainingTime;
@property (nonatomic) int state;
@property (nonatomic) _Bool hasState;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasType;

- (unsigned short)typeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsType: /* Error: Ran out of types for this method. */;
- (unsigned short)stateAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsState: /* Error: Ran out of types for this method. */;

@end

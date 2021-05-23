/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBCallMetrics, _INPBContactValue, _INPBDateTime, _INPBInteger;

@protocol _INPBCallRecordValue <Swift>

@property (nonatomic) int callCapability;
@property (nonatomic) _Bool hasCallCapability;
@property (retain, nonatomic) _INPBCallMetrics *callMetrics;
@property (nonatomic, readonly) _Bool hasCallMetrics;
@property (nonatomic) int callType;
@property (nonatomic) _Bool hasCallType;
@property (retain, nonatomic) _INPBContactValue *caller;
@property (nonatomic, readonly) _Bool hasCaller;
@property (retain, nonatomic) _INPBDateTime *dateCreated;
@property (nonatomic, readonly) _Bool hasDateCreated;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) _INPBInteger *numberOfCalls;
@property (nonatomic, readonly) _Bool hasNumberOfCalls;
@property (nonatomic) _Bool unseen;
@property (nonatomic) _Bool hasUnseen;

- (unsigned short)callTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsCallType: /* Error: Ran out of types for this method. */;
- (unsigned short)callCapabilityAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsCallCapability: /* Error: Ran out of types for this method. */;

@end

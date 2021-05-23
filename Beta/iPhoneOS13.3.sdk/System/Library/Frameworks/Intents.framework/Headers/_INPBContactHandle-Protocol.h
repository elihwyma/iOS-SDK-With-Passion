/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString;

@protocol _INPBContactHandle <Swift>

@property (nonatomic) int emergencyType;
@property (nonatomic) _Bool hasEmergencyType;
@property (copy, nonatomic) NSString *label;
@property (nonatomic, readonly) _Bool hasLabel;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasType;
@property (copy, nonatomic) NSString *value;
@property (nonatomic, readonly) _Bool hasValue;

- (unsigned short)typeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsType: /* Error: Ran out of types for this method. */;
- (unsigned short)emergencyTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsEmergencyType: /* Error: Ran out of types for this method. */;

@end

/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBImageValue, _INPBValueMetadata;

@protocol _INPBPaymentMethodValue <Swift>

@property (retain, nonatomic) _INPBImageValue *icon;
@property (nonatomic, readonly) _Bool hasIcon;
@property (copy, nonatomic) NSString *identificationHint;
@property (nonatomic, readonly) _Bool hasIdentificationHint;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasName;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasType;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

- (unsigned short)typeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsType: /* Error: Ran out of types for this method. */;

@end

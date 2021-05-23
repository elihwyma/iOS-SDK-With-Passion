/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBContact, _INPBDateTimeRange, _INPBLong, _INPBString;

@protocol _INPBFilePropertyValue <Swift>

@property (retain, nonatomic) _INPBDateTimeRange *dateTime;
@property (nonatomic, readonly) _Bool hasDateTime;
@property (nonatomic) int fileType;
@property (nonatomic) _Bool hasFileType;
@property (retain, nonatomic) _INPBContact *person;
@property (nonatomic, readonly) _Bool hasPerson;
@property (retain, nonatomic) _INPBLong *quantity;
@property (nonatomic, readonly) _Bool hasQuantity;
@property (retain, nonatomic) _INPBString *value;
@property (nonatomic, readonly) _Bool hasValue;

- (unsigned short)fileTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsFileType: /* Error: Ran out of types for this method. */;

@end

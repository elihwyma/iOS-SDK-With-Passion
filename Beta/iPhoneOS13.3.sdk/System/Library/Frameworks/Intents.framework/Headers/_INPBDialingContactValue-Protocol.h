/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBContactValue, _INPBStringValue;

@protocol _INPBDialingContactValue <Swift>

@property (retain, nonatomic) _INPBContactValue *dialingContact;
@property (nonatomic, readonly) _Bool hasDialingContact;
@property (retain, nonatomic) _INPBStringValue *dialingPhoneLabel;
@property (nonatomic, readonly) _Bool hasDialingPhoneLabel;
@property (retain, nonatomic) _INPBStringValue *dialingPhoneNumber;
@property (nonatomic, readonly) _Bool hasDialingPhoneNumber;

@end

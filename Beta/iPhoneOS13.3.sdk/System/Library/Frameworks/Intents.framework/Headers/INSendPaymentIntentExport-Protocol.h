/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INCurrencyAmount, INPerson, NSString;

@protocol INSendPaymentIntentExport <Swift>

@property (copy, nonatomic) INPerson *payee;
@property (copy, nonatomic) INCurrencyAmount *currencyAmount;
@property (copy, nonatomic) NSString *note;

- (unsigned short)init;

@end

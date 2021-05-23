/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSDecimalNumber, NSString;

@protocol INCurrencyAmountExport <Swift>

@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currencyCode;

- (unsigned short)init;

@end

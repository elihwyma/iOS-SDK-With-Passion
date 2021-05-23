/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSDecimalNumber, NSString;

@protocol INRideFareLineItemExport <Swift>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDecimalNumber *price;
@property (copy, nonatomic) NSString *currencyCode;

- (unsigned short)init;

@end

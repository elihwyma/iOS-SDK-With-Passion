/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSNumberFormatter, NSString;

@interface NPKPeerPaymentNumberFormatter : NSObject

{
    NSNumberFormatter *_decimalNumberFormatter;
    NSNumberFormatter *_nonDecimalNumberFormatter;
    NSString *_currencyCode;
}

@property (copy, nonatomic) NSString *currencyCode;

- (id)init;
- (id)currencySymbol;
- (id)stringFromNumber:(id)arg1;
- (id)initWithCurrencyCode:(id)arg1;

@end

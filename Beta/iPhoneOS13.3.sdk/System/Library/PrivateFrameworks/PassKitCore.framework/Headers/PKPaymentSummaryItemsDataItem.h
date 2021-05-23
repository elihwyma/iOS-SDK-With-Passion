/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentDataItem.h>

@class NSArray, NSString;

@interface PKPaymentSummaryItemsDataItem : PKPaymentDataItem

@property (nonatomic, readonly) NSString *currencyCode;
@property (nonatomic, readonly) NSArray *paymentSummaryItems;

+ (long long)dataType;

- (_Bool)isValidWithError:(id *)arg1;

@end

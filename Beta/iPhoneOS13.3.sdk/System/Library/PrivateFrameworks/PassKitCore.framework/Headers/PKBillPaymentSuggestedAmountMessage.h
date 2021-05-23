/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString;

@interface PKBillPaymentSuggestedAmountMessage : NSObject

{
    NSString *_title;
    NSString *_message;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;

@end

/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString, PKPaymentSummaryItem;

@interface PKPaymentSummaryItemValidator : NSObject

{
    PKPaymentSummaryItem *_item;
}

@property (nonatomic, readonly) PKPaymentSummaryItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)validatorWithObject:(id)arg1;
+ (Class)validatedClass;

- (_Bool)isValidWithError:(id *)arg1;
- (_Bool)isValidWithAPIType:(unsigned long long)arg1 withError:(id *)arg2;
- (id)initWithPaymentSummaryItem:(id)arg1;

@end

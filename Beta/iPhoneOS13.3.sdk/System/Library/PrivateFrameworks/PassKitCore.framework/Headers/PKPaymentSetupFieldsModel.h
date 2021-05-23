/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSMutableArray, PKPaymentSetupFieldFooter;

@interface PKPaymentSetupFieldsModel : NSObject

{
    NSMutableArray *_paymentSetupFields;
    PKPaymentSetupFieldFooter *_footerField;
}

+ (id)fakePaymentSetupProvisioningFields;
+ (id)defaultPaymentSetupProvisioningFields;

- (id)paymentSetupFieldWithIdentifier:(id)arg1;
- (void)replaceAllPaymentSetupFields:(id)arg1;
- (void)resetAllPaymentSetupFieldValues;
- (void)prefillDefaultValues;
- (id)incompletePaymentSetupFields;
- (id)footerPaymentSetupField;
- (id)initWithPaymentSetupFields:(id)arg1;
- (void)replaceAllPaymentSetupFieldsPreservingCurrentValues:(id)arg1;
- (void)updateWithPaymentSetupFields:(id)arg1;
- (id)paymentSetupFields;
- (id)paymentSetupFieldIdentifiers;
- (id)paymentSetupFieldAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPaymentSetupFields;
- (_Bool)hasIncompletePaymentSetupFields;
- (id)submissionValuesForDestination:(id)arg1;
- (_Bool)hasFooterPaymentSetupField;
- (id)secureSubmissionValuesForDestination:(id)arg1;

@end

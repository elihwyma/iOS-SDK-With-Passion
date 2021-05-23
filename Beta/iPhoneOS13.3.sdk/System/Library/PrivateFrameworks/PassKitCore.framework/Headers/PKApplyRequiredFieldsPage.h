/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKDynamicProvisioningPageContent.h>

@class PKPaymentSetupFieldsModel;

@interface PKApplyRequiredFieldsPage : PKDynamicProvisioningPageContent

{
    PKPaymentSetupFieldsModel *_fieldModel;
}

@property (retain, nonatomic) PKPaymentSetupFieldsModel *fieldModel;

- (id)initWithDictionary:(id)arg1 fieldOptions:(id)arg2 featureApplication:(id)arg3;

@end

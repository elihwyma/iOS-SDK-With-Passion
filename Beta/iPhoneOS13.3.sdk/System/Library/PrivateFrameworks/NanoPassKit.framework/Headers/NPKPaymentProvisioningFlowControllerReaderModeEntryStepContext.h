/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray, NSString, PKPaymentSetupProduct;

@interface NPKPaymentProvisioningFlowControllerReaderModeEntryStepContext : NPKPaymentProvisioningFlowStepContext

{
    NSString *_title;
    NSString *_subtitle;
    NSArray *_setupFields;
    PKPaymentSetupProduct *_product;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSArray *setupFields;
@property (retain, nonatomic) PKPaymentSetupProduct *product;

- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end

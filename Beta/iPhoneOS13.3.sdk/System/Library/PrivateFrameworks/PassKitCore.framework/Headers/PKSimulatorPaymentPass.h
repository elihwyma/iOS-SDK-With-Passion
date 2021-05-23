/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentPass.h>

@class NSDictionary;

@interface PKSimulatorPaymentPass : PKPaymentPass

{
    NSDictionary *_dictionary;
}

- (id)localizedDescription;
- (id)primaryAccountIdentifier;
- (id)primaryAccountNumberSuffix;
- (id)devicePrimaryPaymentApplication;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;

@end

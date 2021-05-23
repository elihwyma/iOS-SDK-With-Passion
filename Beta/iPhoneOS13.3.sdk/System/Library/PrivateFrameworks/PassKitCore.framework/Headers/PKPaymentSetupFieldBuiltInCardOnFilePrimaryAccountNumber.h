/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentSetupFieldText.h>

@interface PKPaymentSetupFieldBuiltInCardOnFilePrimaryAccountNumber : PKPaymentSetupFieldText

- (_Bool)isBuiltIn;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (_Bool)hasDisplayFormat;
- (id)stringByApplyingDisplayFormat:(id)arg1;
- (id)displayFormatPaddingCharacters;

@end

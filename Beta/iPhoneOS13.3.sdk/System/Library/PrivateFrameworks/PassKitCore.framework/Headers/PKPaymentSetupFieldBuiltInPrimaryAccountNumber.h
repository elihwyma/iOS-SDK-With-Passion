/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentSetupFieldText.h>

@interface PKPaymentSetupFieldBuiltInPrimaryAccountNumber : PKPaymentSetupFieldText

- (_Bool)isBuiltIn;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (id)compactLocalizedDisplayName;
- (_Bool)hasDisplayFormat;
- (id)stringByApplyingDisplayFormat:(id)arg1;
- (id)displayFormatPaddingCharacters;

@end

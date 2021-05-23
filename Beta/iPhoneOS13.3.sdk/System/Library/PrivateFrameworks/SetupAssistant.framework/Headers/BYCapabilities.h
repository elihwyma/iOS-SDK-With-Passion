/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@interface BYCapabilities : NSObject

+ (id)sharedCapabilities;

- (_Bool)supportsApplePay;
- (_Bool)supportsPearl;
- (_Bool)mgHasSecureElement;
- (_Bool)mgHasSiriCapability;
- (id)_paymentScreenRequirements;
- (_Bool)_paymentScreenRequirementsIncludePasscode:(id)arg1;
- (_Bool)canShowPasscodeScreen;
- (_Bool)_paymentScreenRequirementsIncludeiCloud:(id)arg1;
- (_Bool)canShowAppleIDScreen;
- (_Bool)mgHasMesa;
- (_Bool)isPearlEnrolled;
- (_Bool)canShowSiriScreen;
- (_Bool)canShowPaymentScreen;
- (_Bool)canShowTouchIDScreen;
- (_Bool)canShowFaceIDScreen;
- (_Bool)mgHasCellularTelephony;
- (_Bool)mgHasGreenTea;

@end

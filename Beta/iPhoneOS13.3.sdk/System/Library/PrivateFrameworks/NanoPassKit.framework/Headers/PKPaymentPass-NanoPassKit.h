/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <PassKitCore/PKPaymentPass.h>

@interface PKPaymentPass (NanoPassKit)

- (_Bool)npkHasUserSelectableContactlessPaymentApplications;
- (id)npkSortedDeviceContactlessPaymentApplications;
- (id)npkDevicePaymentApplicationForAID:(id)arg1;
- (id)npkPreferredContactlessPaymentApplication;
- (void)npkSetPreferredPaymentApplication:(id)arg1;

@end

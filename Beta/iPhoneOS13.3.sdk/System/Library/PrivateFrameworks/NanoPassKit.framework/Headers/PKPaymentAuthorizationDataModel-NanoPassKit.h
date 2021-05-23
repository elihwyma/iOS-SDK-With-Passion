/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <PassKitCore/PKPaymentAuthorizationDataModel.h>

@interface PKPaymentAuthorizationDataModel (NanoPassKit)

- (_Bool)npkIsPeerPayment;
- (_Bool)npkIsSplitPeerPayment;
- (_Bool)_hasNonPeerPaymentAcceptedPasses;
- (void)npkSetPassAndPaymentApplicationForAID:(id)arg1;
- (_Bool)npkIsSkeletonPeerPayment;
- (_Bool)npkIsSplitPeerPaymentWithAnotherPaymentMethod;
- (_Bool)npkIsSplitPeerPaymentWithoutAnotherPaymentMethod;
- (_Bool)npkIsCardOnFilePayment;

@end

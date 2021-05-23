/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class PKPaymentPassAction;

@interface PKPaymentRemoteContentPassActionResponse

{
    PKPaymentPassAction *_updatedAction;
}

@property (retain, nonatomic) PKPaymentPassAction *updatedAction;

- (id)initWithExistingAction:(id)arg1 data:(id)arg2;

@end

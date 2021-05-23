/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class PKAddPaymentPassRequestConfiguration;

@protocol PKAddPaymentPassControllerDelegate;

@interface PKAddPaymentPassController : NSObject

{
    id <PKAddPaymentPassControllerDelegate> _delegate;
    PKAddPaymentPassRequestConfiguration *_configuration;
}

@property (retain, nonatomic) PKAddPaymentPassRequestConfiguration *configuration;
@property (weak, nonatomic) id <PKAddPaymentPassControllerDelegate> delegate;

+ (Class)_desiredClass;
+ (_Bool)canAddPaymentPass;

- (id)init;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithRequestConfiguration:(id)arg1 delegate:(id)arg2;

@end

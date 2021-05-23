/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSArray, NSDictionary, NSString, NSURL;

@interface PKPaymentActivationResponse

{
    NSString *_stepIdentifier;
    NSString *_previousStepIdentifier;
    long long _verificationStatus;
    NSDictionary *_requiredVerificationFieldData;
    NSArray *_verificationChannels;
    NSURL *_passURL;
}

@property (copy, nonatomic) NSArray *verificationChannels;
@property (nonatomic) long long verificationStatus;
@property (copy, nonatomic, readonly) NSString *stepIdentifier;
@property (copy, nonatomic, readonly) NSString *previousStepIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *requiredVerificationFieldData;
@property (copy, nonatomic, readonly) NSURL *passURL;

+ (id)responseWithData:(id)arg1 forPass:(id)arg2;

- (id)initWithData:(id)arg1 forPass:(id)arg2;

@end

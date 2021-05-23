/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKApplyWebServiceResponse.h>

@class PKAccount, PKFeatureApplication;

@interface PKApplyWebServiceApplyResponse : PKApplyWebServiceResponse

{
    PKFeatureApplication *_featureApplication;
    PKAccount *_account;
}

@property (nonatomic, readonly) PKFeatureApplication *featureApplication;
@property (nonatomic, readonly) PKAccount *account;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)nextStepInfo;

@end

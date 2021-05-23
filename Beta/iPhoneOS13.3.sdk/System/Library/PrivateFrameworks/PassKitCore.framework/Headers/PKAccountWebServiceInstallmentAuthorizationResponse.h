/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSString;

@interface PKAccountWebServiceInstallmentAuthorizationResponse : PKAccountWebServiceResponse

{
    NSString *_authorizationToken;
}

@property (copy, nonatomic, readonly) NSString *authorizationToken;

- (id)initWithData:(id)arg1;

@end

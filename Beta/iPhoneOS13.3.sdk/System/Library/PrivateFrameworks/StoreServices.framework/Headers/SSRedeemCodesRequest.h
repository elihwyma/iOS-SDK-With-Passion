/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSArray, NSDictionary, NSString, SSAuthenticationContext;

@interface SSRedeemCodesRequest : SSRequest

{
    SSAuthenticationContext *_authenticationContext;
    NSArray *_redeemCodes;
    _Bool _headless;
    _Bool _cameraRecognized;
    NSDictionary *_params;
    NSString *_logCorrelationKey;
}

@property (readonly) NSArray *redeemCodes;
@property (copy) SSAuthenticationContext *authenticationContext;
@property _Bool headless;
@property _Bool cameraRecognized;
@property (retain, nonatomic) NSString *logCorrelationKey;
@property (retain, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithRedeemResponseBlock:(CDUnknownBlockType)arg1;
- (id)initWithRedeemCodes:(id)arg1;

@end

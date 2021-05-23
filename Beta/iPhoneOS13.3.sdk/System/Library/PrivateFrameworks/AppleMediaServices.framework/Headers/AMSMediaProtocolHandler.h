/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSURLProtocolHandler.h>

@protocol AMSMediaTokenServiceProtocol;

@interface AMSMediaProtocolHandler : AMSURLProtocolHandler

{
    id <AMSMediaTokenServiceProtocol> _tokenService;
}

@property (nonatomic, readonly) id <AMSMediaTokenServiceProtocol> tokenService;

- (void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(_Bool)arg3 error:(id *)arg4;
- (id)handleResponse:(id)arg1 task:(id)arg2;
- (id)initWithTokenService:(id)arg1;

@end

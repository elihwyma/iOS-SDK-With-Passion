/*
 Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

#import <Foundation/NSObject.h>

@class BCAuthenticationRequest, NSString;

@interface BCAuthenticationManager : NSObject

{
    BCAuthenticationRequest *_authenticationRequest;
}

@property (retain, nonatomic) BCAuthenticationRequest *authenticationRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithAuthenticationRequest:(id)arg1;
- (_Bool)processQueryItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)processFragments:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)exchangeCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)accessTokenForData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchTokenWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

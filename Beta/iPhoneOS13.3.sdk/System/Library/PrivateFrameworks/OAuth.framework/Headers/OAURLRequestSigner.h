/*
 Image: /System/Library/PrivateFrameworks/OAuth.framework/OAuth
 */

#import <Foundation/NSObject.h>

@interface OAURLRequestSigner : NSObject

- (void)dealloc;
- (id)initWithCredential:(id)arg1;
- (id)signedURLRequestWithRequest:(id)arg1 applicationID:(id)arg2 timestamp:(id)arg3;
- (id)signedURLRequestWithRequest:(id)arg1;
- (int)signatureMethod;
- (id)signatureMethodString;
- (id)applyApplicationID:(id)arg1 toRequest:(id)arg2 containsMultiPartData:(_Bool)arg3;
- (id)oauthNonce;
- (id)timestamp:(id)arg1;
- (id)oauthParametersWithNonce:(id)arg1 timeStamp:(id)arg2;
- (Class)signer;
- (id)oauthAuthorizationHeaderWithSignature:(id)arg1 nonce:(id)arg2 timestamp:(id)arg3;
- (void)setSignatureMethod:(int)arg1;

@end

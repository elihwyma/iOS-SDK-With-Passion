/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSError, NSURLAuthenticationChallengeInternal, NSURLCredential, NSURLProtectionSpace, NSURLResponse;

@protocol NSURLAuthenticationChallengeSender;

@interface NSURLAuthenticationChallenge : NSObject

{
    NSURLAuthenticationChallengeInternal *_internal;
}

@property (copy, readonly) NSURLProtectionSpace *protectionSpace;
@property (copy, readonly) NSURLCredential *proposedCredential;
@property (readonly) long long previousFailureCount;
@property (copy, readonly) NSURLResponse *failureResponse;
@property (copy, readonly) NSError *error;
@property (retain, readonly) id <NSURLAuthenticationChallengeSender> sender;

+ (_Bool)supportsSecureCoding;
+ (id)_authenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge *)arg1 sender:(id)arg2;
+ (id)_createAuthenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge *)arg1 sender:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSender:(id)arg1;
- (struct _CFURLAuthChallenge *)_createCFAuthChallenge;
- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;
- (id)_initWithListOfProtectionSpaces:(id)arg1 CurrentProtectionSpace:(id)arg2 proposedCredential:(id)arg3 previousFailureCount:(long long)arg4 failureResponse:(id)arg5 error:(id)arg6 sender:(id)arg7;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2;
- (id)_initWithCFAuthChallenge:(struct _CFURLAuthChallenge *)arg1 sender:(id)arg2;
- (_Bool)_isPasswordBasedChallenge;

@end

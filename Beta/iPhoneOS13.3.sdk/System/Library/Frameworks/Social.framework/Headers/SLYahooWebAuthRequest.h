/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

#import <Social/Swift-Protocol.h>

@class NSString;

@interface SLYahooWebAuthRequest : NSObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)urlForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4 authRequestURL:(id)arg5 codeChallenge:(id)arg6;
+ (id)urlForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4 authRequestURL:(id)arg5;
+ (id)requestForURL:(id)arg1;
+ (id)_parametersForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4;
+ (void)clearCookiesFromStorage:(id)arg1 authRequestURL:(id)arg2;
+ (id)urlRequestForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4 authRequestURL:(id)arg5;
+ (_Bool)urlPageWillContainAuthorizationCode:(id)arg1;
+ (id)authCodeFromURLRequest:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

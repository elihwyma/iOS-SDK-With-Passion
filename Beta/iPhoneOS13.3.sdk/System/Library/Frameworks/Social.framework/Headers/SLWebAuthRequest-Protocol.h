/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/Swift-Protocol.h>

@protocol SLWebAuthRequest <Swift>

+ (unsigned short)urlForClientID:redirectURI:scope:username:authRequestURL:codeChallenge: /* Error: Ran out of types for this method. */;
+ (unsigned short)urlForClientID:redirectURI:scope:username:authRequestURL: /* Error: Ran out of types for this method. */;
+ (unsigned short)requestForURL: /* Error: Ran out of types for this method. */;
+ (unsigned short)clearCookiesFromStorage:authRequestURL: /* Error: Ran out of types for this method. */;
+ (unsigned short)urlRequestForClientID:redirectURI:scope:username:authRequestURL: /* Error: Ran out of types for this method. */;
+ (unsigned short)urlPageWillContainAuthorizationCode: /* Error: Ran out of types for this method. */;

+ (unsigned short)authCodeFromURLRequest: /* Error: Ran out of types for this method. */;
+ (unsigned short)authCodeFromWebPageTitle: /* Error: Ran out of types for this method. */;
+ (unsigned short)authCodeFromRedirectURL: /* Error: Ran out of types for this method. */;

@end

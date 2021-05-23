/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/Swift-Protocol.h>

@class NSDate, NSDictionary, NSError, NSString;

@protocol SLWebOAuth2TokenResponse <Swift>

@property (readonly) long long statusCode;
@property (readonly) NSDictionary *data;
@property (readonly) NSString *token;
@property (readonly) NSString *refreshToken;
@property (readonly) NSString *idToken;
@property (readonly) NSDate *expiryDate;
@property (readonly) NSError *error;
@property (readonly) NSString *errorMessage;
@property (readonly) NSString *GUID;

- (unsigned short)initWithData:urlResponse:error: /* Error: Ran out of types for this method. */;

@end

/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSError, NSString;

@interface SLGoogleOAuth2TokenResponse : NSObject

{
    NSDictionary *_data;
    NSError *_error;
    NSString *_errorMessage;
    NSDate *_expiryDate;
    NSString *_GUID;
    NSString *_refreshToken;
    long long _statusCode;
    NSString *_token;
    NSString *_idToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) long long statusCode;
@property (readonly) NSDictionary *data;
@property (readonly) NSString *token;
@property (readonly) NSString *refreshToken;
@property (readonly) NSString *idToken;
@property (readonly) NSDate *expiryDate;
@property (readonly) NSError *error;
@property (readonly) NSString *errorMessage;
@property (readonly) NSString *GUID;

- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;

@end

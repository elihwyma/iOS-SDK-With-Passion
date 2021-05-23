/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSError, NSString;

@interface SLWebUserInfoResponse : NSObject

{
    long long _statusCode;
    NSString *_displayName;
    NSArray *_emailAddresses;
    NSError *_error;
    NSString *_errorMessage;
    NSDictionary *_userInfo;
}

@property (readonly) long long statusCode;
@property (readonly) NSString *displayName;
@property (readonly) NSString *emailAddress;
@property (readonly) NSArray *emailAddresses;
@property (readonly) NSError *error;
@property (readonly) NSString *errorMessage;
@property (readonly) NSDictionary *userInfo;

- (void)setError:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setErrorMessage:(id)arg1;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;

@end

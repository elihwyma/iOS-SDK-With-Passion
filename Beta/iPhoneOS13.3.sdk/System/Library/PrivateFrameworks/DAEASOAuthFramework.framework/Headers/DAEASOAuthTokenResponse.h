/*
 Image: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSError, NSString;

@interface DAEASOAuthTokenResponse : NSObject

{
    long long _statusCode;
    NSDictionary *_data;
    NSString *_token;
    NSString *_refreshToken;
    NSDate *_expiryDate;
    NSError *_error;
    NSString *_errorMessage;
    NSString *_user_id;
}

@property (nonatomic, readonly) long long statusCode;
@property (nonatomic, readonly) NSDictionary *data;
@property (nonatomic, readonly) NSString *token;
@property (nonatomic, readonly) NSString *refreshToken;
@property (nonatomic, readonly) NSDate *expiryDate;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *errorMessage;
@property (nonatomic, readonly) NSString *user_id;

- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;
- (id)usernameFromJWTToken:(id)arg1;

@end

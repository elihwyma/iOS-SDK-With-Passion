/*
 Image: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSError, NSString;

@interface DAEASOAuthTokenRefreshResponse : NSObject

{
    long long _statusCode;
    NSError *_error;
    NSDictionary *_responseBody;
    NSString *_accessToken;
    NSString *_refreshToken;
    NSDate *_expiryDate;
}

@property (nonatomic, readonly) long long statusCode;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSDictionary *responseBody;
@property (nonatomic, readonly) NSString *accessToken;
@property (nonatomic, readonly) NSString *refreshToken;
@property (nonatomic, readonly) NSDate *expiryDate;

- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;

@end

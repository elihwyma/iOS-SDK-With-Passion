/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSError, NSString;

@interface SLYahooOAuth2MigrationResponse : NSObject

{
    long long _statusCode;
    NSError *_error;
    NSDictionary *_responseBody;
    NSString *_accessToken;
    NSString *_refreshToken;
    NSDate *_expiryDate;
}

@property (readonly) long long statusCode;
@property (readonly) NSError *error;
@property (readonly) NSDictionary *responseBody;
@property (readonly) NSString *accessToken;
@property (readonly) NSString *refreshToken;
@property (readonly) NSDate *expiryDate;

- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;

@end

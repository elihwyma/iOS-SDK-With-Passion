/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface SLYahooLoginTokenResponse : NSObject

{
    long long _statusCode;
    NSError *_error;
    NSString *_body;
    NSString *_loginToken;
}

@property (readonly) long long statusCode;
@property (readonly) NSError *error;
@property (readonly) NSString *body;
@property (readonly) NSString *loginToken;

- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;

@end

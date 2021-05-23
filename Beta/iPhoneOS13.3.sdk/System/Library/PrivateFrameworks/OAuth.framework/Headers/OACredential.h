/*
 Image: /System/Library/PrivateFrameworks/OAuth.framework/OAuth
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface OACredential : NSObject

{
    NSString *_consumerKey;
    NSString *_consumerSecret;
    NSString *_oauthToken;
    NSString *_oauthTokenSecret;
}

@property (copy, nonatomic) NSString *consumerKey;
@property (copy, nonatomic) NSString *consumerSecret;
@property (copy, nonatomic) NSString *oauthToken;
@property (copy, nonatomic) NSString *oauthTokenSecret;

- (void)dealloc;
- (id)signingKey;

@end

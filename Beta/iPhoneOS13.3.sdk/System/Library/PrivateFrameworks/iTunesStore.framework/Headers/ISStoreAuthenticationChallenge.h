/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <iTunesStore/ISAuthenticationChallenge.h>

@class NSString;

@protocol NSURLAuthenticationChallengeSender;

@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge

{
    long long _failureCount;
    _Bool _hasPassword;
    NSString *_password;
    id <NSURLAuthenticationChallengeSender> _sender;
    NSString *_user;
    _Bool _userNameIsEditable;
}

@property long long failureCount;
@property _Bool hasPassword;
@property (retain) NSString *password;
@property id <NSURLAuthenticationChallengeSender> sender;
@property (retain) NSString *user;
@property _Bool userNameIsEditable;

- (id)init;
- (void)dealloc;
- (_Bool)userNameIsEmail;

@end

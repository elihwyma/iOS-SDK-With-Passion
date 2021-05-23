/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class NSString, NSURLAuthenticationChallenge;

@protocol NSURLAuthenticationChallengeSender;

@interface ISAuthenticationChallenge : NSObject

{
    NSURLAuthenticationChallenge *_challenge;
    NSString *_localizedMessage;
    NSString *_localizedTitle;
}

@property (retain) NSString *localizedMessage;
@property (retain) NSString *localizedTitle;
@property (readonly) _Bool hasPassword;
@property (retain, readonly) NSString *password;
@property (retain, readonly) NSString *user;
@property (readonly) long long failureCount;
@property (readonly) _Bool userNameIsEditable;
@property (readonly) _Bool userNameIsEmail;
@property (readonly) id <NSURLAuthenticationChallengeSender> sender;

- (void)dealloc;
- (id)initWithAuthenticationChallenge:(id)arg1;
- (void)cancelAuthentication;
- (void)useCredential:(id)arg1;

@end

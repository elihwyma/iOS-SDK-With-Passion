/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AARequest.h>

@class ACAccount, NSString, SSAccount;

@interface AAMyPhotoRequest : AARequest

{
    ACAccount *_account;
    NSString *_serverCacheTag;
    SSAccount *_iTunesAccount;
}

@property (copy, nonatomic) NSString *serverCacheTag;
@property (retain, nonatomic, setter=setiTunesAccount:) SSAccount *iTunesAccount;

+ (Class)responseClass;

- (id)initWithAccount:(id)arg1;
- (id)urlRequest;
- (id)urlString;

@end

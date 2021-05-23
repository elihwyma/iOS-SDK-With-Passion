/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ACAccount, ACAccountStore, ICUserIdentityProperties, ICUserIdentityStore;

@interface ICUserVerificationContext : NSObject <Swift>

{
    long long _interactionLevel;
    ICUserIdentityProperties *_identityProperties;
    ACAccount *_ACAccount;
    ACAccountStore *_ACAccountStore;
    ICUserIdentityStore *_identityStore;
    long long _verificationStyle;
}

@property (retain, nonatomic) ACAccount *ACAccount;
@property (retain, nonatomic) ACAccountStore *ACAccountStore;
@property (copy, nonatomic) ICUserIdentityProperties *identityProperties;
@property (retain, nonatomic) ICUserIdentityStore *identityStore;
@property (nonatomic) long long verificationStyle;
@property (nonatomic) long long interactionLevel;

+ (id)contextWithACAccount:(id)arg1 accountStore:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end

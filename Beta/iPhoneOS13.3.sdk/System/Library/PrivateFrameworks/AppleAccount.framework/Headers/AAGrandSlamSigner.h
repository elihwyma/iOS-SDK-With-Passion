/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@class ACAccount, ACAccountStore, NSString;

@interface AAGrandSlamSigner : NSObject

{
    ACAccountStore *_accountStore;
    ACAccount *_grandSlamAccount;
    NSString *_appTokenID;
    _Bool _useAltDSID;
    NSString *_headerFieldKey;
}

@property (nonatomic, readonly) ACAccount *grandSlamAccount;
@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic) _Bool useAltDSID;
@property (retain, nonatomic) NSString *headerFieldKey;

- (id)initWithAccountStore:(id)arg1 grandSlamAccount:(id)arg2 appTokenID:(id)arg3;
- (_Bool)signURLRequest:(id)arg1 isUserInitiated:(_Bool)arg2;
- (id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 appTokenID:(id)arg4;
- (_Bool)signURLRequest:(id)arg1;

@end

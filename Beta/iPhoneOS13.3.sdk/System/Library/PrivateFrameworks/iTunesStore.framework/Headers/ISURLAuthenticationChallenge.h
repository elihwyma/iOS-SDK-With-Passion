/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <iTunesStore/ISAuthenticationChallenge.h>

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge

+ (id)_messageForProtectionSpace:(id)arg1;
+ (id)_titleForProtectionSpace:(id)arg1;

- (id)user;
- (id)password;
- (id)sender;
- (_Bool)hasPassword;
- (long long)failureCount;
- (id)initWithAuthenticationChallenge:(id)arg1;
- (void)cancelAuthentication;
- (void)useCredential:(id)arg1;

@end

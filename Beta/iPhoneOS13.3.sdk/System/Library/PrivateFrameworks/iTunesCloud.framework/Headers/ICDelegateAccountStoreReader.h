/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICSQLiteConnection, NSDate;

@interface ICDelegateAccountStoreReader : NSObject

{
    ICSQLiteConnection *_connection;
    _Bool _isValid;
}

@property (copy, nonatomic, readonly) NSDate *lastExpirationPruningDate;
@property (nonatomic, readonly) long long overestimatedNumberOfTokens;

- (void)invalidate;
- (id)initWithConnection:(id)arg1;
- (void)enumerateTokensUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateQueryResults:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_tokenWithSQLiteRow:(id)arg1;
- (id)_userIdentityWithSQLiteRow:(id)arg1;
- (void)enumerateDelegationUUIDsForUserIdentity:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateTokensWithType:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)identityPropertiesForUserIdentity:(id)arg1;
- (id)tokenForUserIdentity:(id)arg1;

@end

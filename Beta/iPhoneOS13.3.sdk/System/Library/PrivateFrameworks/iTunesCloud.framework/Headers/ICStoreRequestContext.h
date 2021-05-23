/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRequestContext.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICStoreDialogResponseHandler, ICUserIdentity, ICUserIdentityStore;

@interface ICStoreRequestContext : ICRequestContext <Swift>

{
    ICUserIdentity *_delegatedIdentity;
    ICUserIdentity *_identity;
    ICUserIdentityStore *_identityStore;
    ICStoreDialogResponseHandler *_storeDialogResponseHandler;
    long long _personalizationStyle;
    _Bool _allowsExpiredBags;
}

@property (copy, nonatomic, readonly) ICUserIdentity *identity;
@property (copy, nonatomic, readonly) ICUserIdentity *delegatedIdentity;
@property (nonatomic, readonly) ICUserIdentityStore *identityStore;
@property (copy, nonatomic, readonly) ICStoreDialogResponseHandler *storeDialogResponseHandler;
@property (nonatomic, readonly) _Bool allowsExpiredBags;
@property (nonatomic, readonly) long long personalizationStyle;

+ (_Bool)supportsSecureCoding;
+ (id)activeStoreAccountRequestContext;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithIdentity:(id)arg1;
- (void)setIdentity:(id)arg1;
- (void)setPersonalizationStyle:(long long)arg1;
- (void)setIdentityStore:(id)arg1;
- (void)setDelegatedIdentity:(id)arg1;
- (void)setAllowsExpiredBags:(_Bool)arg1;
- (id)initWithIdentity:(id)arg1 clientInfo:(id)arg2;
- (id)copyWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithIdentity:(id)arg1 identityStore:(id)arg2 clientInfo:(id)arg3;
- (id)initWithIdentity:(id)arg1 identityStore:(id)arg2 clientInfo:(id)arg3 authenticationProvider:(id)arg4;
- (void)setStoreDialogResponseHandler:(id)arg1;

@end

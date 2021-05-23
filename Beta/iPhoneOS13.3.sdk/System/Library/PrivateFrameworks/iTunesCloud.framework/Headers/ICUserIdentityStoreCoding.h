/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICDelegateAccountStoreOptions, ICValueHistory;

@protocol ICUserIdentityStoreBackend;

@interface ICUserIdentityStoreCoding : NSObject <Swift>

{
    struct os_unfair_lock_s _lock;
    long long _identityStoreStyle;
    long long _uniqueIdentifier;
    ICValueHistory *_activeAccountHistory;
    ICValueHistory *_activeLockerAccountHistory;
    id <ICUserIdentityStoreBackend> _backend;
    ICDelegateAccountStoreOptions *_delegateAccountStoreOptions;
}

@property (nonatomic, readonly) long long identityStoreStyle;
@property (nonatomic, readonly) long long uniqueIdentifier;
@property (copy, nonatomic) ICValueHistory *activeAccountHistory;
@property (copy, nonatomic) ICValueHistory *activeLockerAccountHistory;
@property (copy, nonatomic) id <ICUserIdentityStoreBackend> backend;
@property (copy, nonatomic) ICDelegateAccountStoreOptions *delegateAccountStoreOptions;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initCommon;
- (id)initWithIdentityStoreStyle:(long long)arg1;
- (void)lock:(CDUnknownBlockType)arg1;

@end

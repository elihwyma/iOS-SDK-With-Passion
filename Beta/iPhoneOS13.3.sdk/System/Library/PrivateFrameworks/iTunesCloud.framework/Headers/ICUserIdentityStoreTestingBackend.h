/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICLocalStoreAccountProperties, NSMutableDictionary, NSNumber, NSString;

@protocol ICUserIdentityStoreBackendDelegate;

@interface ICUserIdentityStoreTestingBackend : NSObject

{
    NSNumber *_activeAccountDSID;
    NSNumber *_activeLockerAccountDSID;
    NSMutableDictionary *_identityProperties;
    ICLocalStoreAccountProperties *_localStoreAccountProperties;
    id <ICUserIdentityStoreBackendDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <ICUserIdentityStoreBackendDelegate> delegate;

+ (_Bool)supportsSecureCoding;
+ (void)setDefaultActiveAccountDSID:(id)arg1;
+ (void)setDefaultActiveLockerAccountDSID:(id)arg1;
+ (void)setDefaultStorefrontIdentifier:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)synchronize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)activeAccountDSIDWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateActiveAccountDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activeLockerAccountDSIDWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateActiveLockerAccountDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)identityPropertiesForDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)identityPropertiesForPrimaryICloudAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeIdentityForDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)localStoreAccountPropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (id)localStoreAccountPropertiesWithError:(id *)arg1;
- (void)setLocalStoreAccountProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)verificationContextForDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)verificationContextForAccountEstablishmentWithCompletion:(CDUnknownBlockType)arg1;
- (id)_propertiesToSaveForProperties:(id)arg1;

@end

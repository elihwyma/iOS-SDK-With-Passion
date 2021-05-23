/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class ACAccountStore, CRKCloudUser, CRKSecureCodedUserDefaultsObject, NSMutableDictionary, NSString;

@interface CRKSystemCloudUserProvider : NSObject

{
    ACAccountStore *_store;
    CRKSecureCodedUserDefaultsObject *_persistedCloudUser;
    NSMutableDictionary *_isHSA2ByIdentifier;
    CRKCloudUser *_cloudUser;
}

@property (nonatomic, readonly) ACAccountStore *store;
@property (nonatomic, readonly) CRKSecureCodedUserDefaultsObject *persistedCloudUser;
@property (nonatomic, readonly) NSMutableDictionary *isHSA2ByIdentifier;
@property (retain, nonatomic) CRKCloudUser *cloudUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithStore:(id)arg1;
- (void)accountStoreDidChange:(id)arg1;
- (void)updateCloudUser;
- (void)updateCloudUserDebounced;
- (id)uniqueKeyForAccount:(id)arg1;
- (void)flushHSA2Cache;
- (id)cloudUserWithAccount:(id)arg1;
- (void)latchCloudUser:(id)arg1;
- (_Bool)isAccountHSA2:(id)arg1;

@end

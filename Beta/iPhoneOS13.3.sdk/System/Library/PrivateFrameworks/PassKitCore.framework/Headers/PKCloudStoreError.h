/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSError.h>

@interface PKCloudStoreError : NSError

+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
+ (_Bool)_isCloudKitErrorDomain:(id)arg1;

- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (long long)_code;
- (id)initWithError:(id)arg1;
- (_Bool)isPartialError;
- (id)_allPartialErrors;
- (_Bool)isZoneNotFoundError;
- (_Bool)isUnrecoverableDecryptionError;
- (_Bool)isManateeNotAvailableError;
- (_Bool)isKeychainSyncingInProgress;
- (_Bool)isPCSError;
- (_Bool)isChangeTokenExpired;
- (_Bool)isNetworkUnavailable;
- (_Bool)isInitializationTimeOutError;

@end

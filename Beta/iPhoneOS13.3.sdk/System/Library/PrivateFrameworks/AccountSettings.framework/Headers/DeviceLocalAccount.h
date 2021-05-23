/*
 Image: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

#import <AccountSettings/BasicAccount.h>

@interface DeviceLocalAccount : BasicAccount

+ (id)_identifier;
+ (id)typeString;
+ (id)accountWithBasicAccount:(id)arg1;
+ (id)basicAccountProperties;
+ (id)localizedSyncSourceStringForDataClass:(id)arg1 forBeginningOfSentence:(_Bool)arg2;
+ (id)localizedReferenceToSyncSourceStringForDataClass:(id)arg1;
+ (_Bool)isTetheredSyncingDataclass:(id)arg1;
+ (id)tetheredSourceForDataClass:(id)arg1;

- (id)identifier;
- (id)displayName;
- (id)syncStoreIdentifier;

@end

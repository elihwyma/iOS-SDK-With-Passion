/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@interface _DKCKError : NSObject

+ (_Bool)isShouldDeferError:(id)arg1;
+ (_Bool)isUnrecoverableDecryptionError:(id)arg1;
+ (id)zoneIDsWithUnrecoverableDecryptionError:(id)arg1;
+ (id)errorMinusUnrecoverableDecryptionErrorsFromPartialError:(id)arg1;
+ (_Bool)isIgnorableError:(id)arg1;
+ (_Bool)isChangeTokenExpiredError:(id)arg1;
+ (_Bool)isOperationCancelledError:(id)arg1;
+ (_Bool)isPartialError:(id)arg1;
+ (id)_allPartialErrorsFromError:(id)arg1;
+ (void)_populateZoneIDs:(id)arg1 fromUnrecoverableDecryptionError:(id)arg2 zoneID:(id)arg3;
+ (_Bool)isManateeNotAvailableError:(id)arg1;
+ (_Bool)isKeychainSyncingInProgressError:(id)arg1;
+ (_Bool)isPCSError:(id)arg1;
+ (_Bool)isNetworkUnavailableError:(id)arg1;

@end

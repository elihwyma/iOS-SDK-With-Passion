/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

@class ACAccount, ACAccountStore;

@interface _KSiCloudDeviceListMonitor : NSObject

{
    ACAccountStore *_accountStore;
    ACAccount *_account;
    long long _majorVersForCloudKitSyncMacOS;
    long long _minorVersForCloudKitSyncMacOS;
    long long _minorSubversionForCloudKitSyncMacOS;
    long long _majorVersForCloudKitSynciOS;
    long long _minorVersForCloudKitSynciOS;
}

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) ACAccount *account;
@property (nonatomic) long long majorVersForCloudKitSyncMacOS;
@property (nonatomic) long long minorVersForCloudKitSyncMacOS;
@property (nonatomic) long long minorSubversionForCloudKitSyncMacOS;
@property (nonatomic) long long majorVersForCloudKitSynciOS;
@property (nonatomic) long long minorVersForCloudKitSynciOS;

+ (id)iCloudDeviceListMonitor;

- (id)init;
- (void)dealloc;
- (void)fetchCloudKitDevicesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchICloudDevicesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)queryMigrationState;
- (void)isAccountCompatibleForCloudKitSyncingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)isSWVersionCloudKitSyncCompatible:(id)arg1;
- (void)resetDataNoAccount;
- (_Bool)canMigrateToCloudKit;

@end

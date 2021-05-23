/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class ACAccount, ACAccountStore;

@interface REMAppleAccountUtilities : NSObject

{
    _Bool _primaryICloudACAccountIsValid;
    ACAccount *_primaryICloudACAccount;
    ACAccountStore *_accountStore;
}

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) _Bool primaryICloudACAccountIsValid;
@property (readonly) ACAccount *primaryICloudACAccount;
@property (readonly) _Bool primaryICloudAccountEnabled;

+ (id)sharedInstance;
+ (id)getAppleIDSession;
+ (id)accountDescriptionWithACAccount:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)accessQueue;
- (id)initForObservingAccountStoreChanges:(_Bool)arg1;
- (void)accountStoreDidChange:(id)arg1;
- (void)internalInvalidatePrimaryICloudACAccount;
- (id)allICloudAccountsWithCloudKitEnabled;
- (void)invalidatePrimaryICloudACAccount;
- (void)saveDidChooseToMigrate:(_Bool)arg1 didFinishMigration:(_Bool)arg2 toACAccount:(id)arg3 inStore:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)primaryICloudAccountCalDavService;

@end

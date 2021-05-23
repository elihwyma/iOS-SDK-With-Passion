/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/MTLModel.h>

@class NSDate, NSString;

@interface WFAccount : MTLModel

{
    NSString *_accountID;
    NSDate *_createdAt;
    NSDate *_updatedAt;
}

@property (copy, nonatomic, readonly) NSString *accountID;
@property (copy, nonatomic, readonly) NSDate *createdAt;
@property (copy, nonatomic, readonly) NSDate *updatedAt;
@property (copy, nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly, getter=isValid) _Bool valid;

+ (_Bool)supportsSecureCoding;
+ (id)accounts;
+ (id)_accounts;
+ (id)localizedServiceName;
+ (_Bool)deleteAccount:(id)arg1;
+ (id)serviceID;
+ (_Bool)saveAccount:(id)arg1;
+ (unsigned long long)numberOfAccounts;
+ (Class)loginViewControllerClass;
+ (_Bool)allowsMultipleAccounts;
+ (void)notifyAccountsChanged;
+ (void)setShouldIgnoreNotificationForService:(id)arg1;
+ (id)addAccountObserver:(CDUnknownBlockType)arg1;
+ (void)removeAccountObserver:(id)arg1;
+ (_Bool)shouldIgnoreNotificationForService:(id)arg1;
+ (void)handleChangeForService:(id)arg1;
+ (void)useAccountObservers:(CDUnknownBlockType)arg1;
+ (id)accountCache;
+ (unsigned long long)_numberOfAccounts;
+ (id)pendingIgnoredNotifications;
+ (void)addAccountObserver:(CDUnknownBlockType)arg1 forService:(id)arg2;
+ (id)migrate:(id)arg1;

- (id)init;
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invalidateWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

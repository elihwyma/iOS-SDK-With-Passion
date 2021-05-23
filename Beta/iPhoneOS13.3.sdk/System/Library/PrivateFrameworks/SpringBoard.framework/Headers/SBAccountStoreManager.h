/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class ACAccount, ACAccountStore;

@protocol OS_dispatch_queue;

@interface SBAccountStoreManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    ACAccountStore *_accountStore;
    ACAccount *_primaryAppleAccount;
}

@property (retain) ACAccount *primaryAppleAccount;
@property (nonatomic, readonly) ACAccountStore *accountStore;

- (id)init;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_queue_updatePrimaryAppleAccountAndNotify:(_Bool)arg1;
- (void)_updatePrimaryAppleAccount;

@end

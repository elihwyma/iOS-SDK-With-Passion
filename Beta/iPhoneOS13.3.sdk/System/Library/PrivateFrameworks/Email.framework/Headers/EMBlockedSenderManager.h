/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class NSSet;

@protocol EFScheduler, OS_dispatch_queue;

@interface EMBlockedSenderManager : NSObject

{
    struct atomic_flag _didRemoveObservers;
    NSSet *_blockedSenderCache;
    id <EFScheduler> _resetScheduler;
    NSObject<OS_dispatch_queue> *_cacheQueue;
}

@property (retain, nonatomic) NSSet *blockedSenderCache;
@property (retain, nonatomic) id <EFScheduler> resetScheduler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;
@property (nonatomic, getter=isMoveToTrashEnabled) _Bool moveToTrashEnabled;
@property (nonatomic, getter=isBlockedSenderEnabled) _Bool blockedSenderEnabled;

+ (_Bool)shouldPromptForBlockedSender;
+ (void)setPromptForBlockedSender:(_Bool)arg1;
+ (_Bool)shouldMoveToTrashForMailboxType:(long long)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEmailAddressBlocked:(id)arg1;
- (void)_blockedSenderListDidChange:(id)arg1;
- (void)_resetBlockedSenderCache;
- (void)_removeObserversIfNeeded;
- (void)_postBlockedSenderListDidChangeNotificationBasedOnBlockedSenderEnabledState;
- (_Bool)_isEmailAddressBlocked:(id)arg1;
- (void)_blockContact:(id)arg1 block:(_Bool)arg2;
- (void)blockEmailAddress:(id)arg1;
- (void)unblockEmailAddress:(id)arg1;
- (_Bool)isContactBlocked:(id)arg1;
- (void)blockContact:(id)arg1;
- (void)unblockContact:(id)arg1;
- (void)blockEmailAddresses:(id)arg1;
- (void)unblockEmailAddresses:(id)arg1;
- (void)_blockPhoneNumber:(id)arg1;
- (void)_unblockPhoneNumber:(id)arg1;
- (void)test_tearDown;
- (_Bool)isTokenAddressIsBlocked:(id)arg1;
- (void)blockTokenAddress:(id)arg1;
- (void)unblockTokenAddress:(id)arg1;
- (_Bool)areAnyEmailAddressesBlocked:(id)arg1;

@end

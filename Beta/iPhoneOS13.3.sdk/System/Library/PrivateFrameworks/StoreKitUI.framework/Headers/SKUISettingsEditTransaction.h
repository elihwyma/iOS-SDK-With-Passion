/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMutableSet, NSSet;

@protocol SKUISettingsEditTransactionDelegate;

__attribute__((visibility("hidden")))
@interface SKUISettingsEditTransaction : NSObject

{
    NSSet *_all;
    CDUnknownBlockType _commitBlock;
    NSLock *_lock;
    NSMutableSet *_pending;
    _Bool _success;
    id <SKUISettingsEditTransactionDelegate> _delegate;
}

@property (weak, nonatomic) id <SKUISettingsEditTransactionDelegate> delegate;

- (_Bool)isValid;
- (void)beginTransaction;
- (void)commitTransaction;
- (void)rollbackTransaction;
- (_Bool)isCommiting;
- (void)cancelTransaction;
- (id)initWithSettingDescriptions:(id)arg1;
- (void)_delegateWillBeginTransaction;
- (void)_delegateDidFailTransaction;
- (void)_delegateWillCommitTransaction;
- (void)_settingDescription:(id)arg1 completedWithSuccess:(_Bool)arg2;
- (void)_delegateDidCompleteTransaction;
- (void)_finalizeCommit;

@end

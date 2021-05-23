/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

@interface BYSilentLoginUpgradeGuarantor : NSObject

{
    _Bool _didEnsureQueuesAndStartSilentLoginUpgrade;
    NSObject<OS_dispatch_queue> *_silentLoginUpgradeCompletionQueue;
    NSObject<OS_dispatch_queue> *_shortLivedTokenUpgradeCompletionQueue;
}

@property (nonatomic) _Bool didEnsureQueuesAndStartSilentLoginUpgrade;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *silentLoginUpgradeCompletionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *shortLivedTokenUpgradeCompletionQueue;

+ (id)sharedInstance;

- (id)init;
- (void)_ensureQueuesAndStartSilentLoginUpgrade;
- (void)blockUntilSilentLoginUpgradeCompletesForNonLoginUser;
- (void)didShortCircuitSilentLoginUpgrade;
- (void)didShortCircuitShortLivedTokenUpgrade;
- (void)blockUntilSilentLoginUpgradeCompletes;
- (void)blockUntilShortLivedTokenUpgradeCompletes;

@end

/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSMutableArray, NSURL, PKPassUpgradeRequest, PKPaymentPass;

@interface PKPendingPassUpgrade : NSObject

{
    _Bool _appletDidUpgrade;
    _Bool _webRequestFinished;
    _Bool _requiresAppletUpgrade;
    _Bool _passUpgradeInProgress;
    PKPassUpgradeRequest *_upgradeRequest;
    NSMutableArray *_completionHandlers;
    PKPaymentPass *_upgradedPass;
    NSURL *_upgradePassURL;
}

@property (nonatomic, readonly) PKPassUpgradeRequest *upgradeRequest;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (nonatomic) _Bool webRequestFinished;
@property (nonatomic) _Bool requiresAppletUpgrade;
@property (nonatomic) _Bool appletDidUpgrade;
@property (retain, nonatomic) PKPaymentPass *upgradedPass;
@property (copy, nonatomic) NSURL *upgradePassURL;
@property (nonatomic) _Bool passUpgradeInProgress;
@property (nonatomic, readonly) _Bool upgradeIsComplete;

- (id)initWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

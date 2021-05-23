/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface SBLockScreenActionManager : NSObject

{
    NSMutableDictionary *_actionProviders;
}

@property (retain, nonatomic) NSMutableDictionary *actionProviders;

- (id)init;
- (id)currentLockScreenActionContextActionSource:(unsigned long long *)arg1;
- (void)_clearActionOnAllProviders;
- (void)registerLockScreenActionProvider:(id)arg1 forSource:(unsigned long long)arg2;
- (id)currentLockScreenActionContext;
- (void)runUnlockAction;

@end

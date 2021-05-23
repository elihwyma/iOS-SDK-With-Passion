/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableModuleController.h>

@class HUAppleMusicAccountModule, HUButtonCell, NAFuture, NSMapTable;

@protocol HUAppleMusicAccountModuleControllerDelegate;

@interface HUAppleMusicAccountModuleController : HUItemTableModuleController

{
    id <HUAppleMusicAccountModuleControllerDelegate> _delegate;
    HUButtonCell *_logoutButton;
    NAFuture *_logoutFuture;
    HUButtonCell *_loginButton;
    NAFuture *_loginFuture;
    HUButtonCell *_activeAuthCell;
    NSMapTable *_itemToCellMap;
}

@property (weak, nonatomic) HUButtonCell *logoutButton;
@property (retain, nonatomic) NAFuture *logoutFuture;
@property (weak, nonatomic) HUButtonCell *loginButton;
@property (retain, nonatomic) NAFuture *loginFuture;
@property (weak, nonatomic) HUButtonCell *activeAuthCell;
@property (retain, nonatomic) NSMapTable *itemToCellMap;
@property (nonatomic, readonly) HUAppleMusicAccountModule *module;
@property (weak, nonatomic) id <HUAppleMusicAccountModuleControllerDelegate> delegate;

- (void)dealloc;
- (id)initWithModule:(id)arg1;
- (_Bool)canSelectItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;
- (void)_setupButtonCell:(id)arg1 enabled:(_Bool)arg2;
- (id)kickOffManualLogin;
- (void)_logout;
- (void)_setupCompanionAuthenticationForAccount:(id)arg1 cell:(id)arg2;
- (void)_enableCells;
- (void)_updateModuleState:(unsigned long long)arg1 notifyDelegate:(_Bool)arg2;
- (void)_reloadForAuthEvent;
- (void)clearLogoutFuture;
- (void)_setupProxyAuthenticationForAccount:(id)arg1 cell:(id)arg2;
- (_Bool)_canExecuteAccountAction;
- (void)_disableCells;
- (id)_proxyLoginWithAccount:(id)arg1 cell:(id)arg2;
- (id)_companionLoginWithAccount:(id)arg1 cell:(id)arg2;
- (id)_authenticationContextForAccessory:(id)arg1 account:(id)arg2;
- (id)_authCells;

@end

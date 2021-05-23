/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <FrontBoard/FBSServiceFacility.h>

@protocol SBApplicationServerHarmonyDelegate, SBApplicationServerMiscDelegate, SBApplicationServerMultiwindowDelegate, SBApplicationServerShortcutDelegate;

@interface SBApplicationServer : FBSServiceFacility

{
    id <SBApplicationServerMiscDelegate> _miscDelegate;
    id <SBApplicationServerHarmonyDelegate> _harmonyDelegate;
    id <SBApplicationServerShortcutDelegate> _shortcutDelegate;
    id <SBApplicationServerMultiwindowDelegate> _multiwindowDelegate;
}

@property (weak, nonatomic) id <SBApplicationServerMiscDelegate> miscDelegate;
@property (weak, nonatomic) id <SBApplicationServerHarmonyDelegate> harmonyDelegate;
@property (weak, nonatomic) id <SBApplicationServerShortcutDelegate> shortcutDelegate;
@property (weak, nonatomic) id <SBApplicationServerMultiwindowDelegate> multiwindowDelegate;

+ (id)sharedInstance;

- (void)dealloc;
- (id)_init;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)_handleDeleteApplicationSnapshots:(id)arg1 fromClient:(id)arg2;
- (void)_handleHarmonyFetchWhitePointAdaptivityStyleMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleShortcutFetchApplicationShortcutItemsMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleShortcutUpdateDynamicApplicationShortcutItemsMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleMultiwindowShortcutServiceClientMessage:(id)arg1 fromClient:(id)arg2;

@end

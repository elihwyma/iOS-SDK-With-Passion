/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIWindowScene.h>

@class UIMutableApplicationSceneSettings, UIScreen;

@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface _UIScreenBasedWindowScene : UIWindowScene

{
    UIScreen *_screen;
    UIMutableApplicationSceneSettings *_synthesizedSettings;
    _Bool _invalidationHandlerRegistered;
    id <NSCopying> _lookupKey;
}

+ (id)unassociationCacheAccessQueue;
+ (id)unassociationCache;
+ (_Bool)shouldAllowComponents;
+ (_Bool)alwaysKeepContexts;
+ (_Bool)autoinvalidates;
+ (id)_unassociatedWindowSceneForScreen:(id)arg1 create:(_Bool)arg2;

- (void)setDelegate:(id)arg1;
- (id)screen;
- (_Bool)_shouldAllowFencing;
- (struct CGRect)_referenceBounds;
- (void)_openURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_synthesizedSettings;
- (id)_displayInfoProvider;
- (void)_invalidateScreen;
- (void)_detachWindow:(id)arg1;
- (id)initWithScreen:(id)arg1 session:(id)arg2 lookupKey:(id)arg3;
- (void)_setKeepContextAssociationInBackground:(_Bool)arg1;
- (struct CGRect)_referenceBoundsForOrientation:(long long)arg1;
- (void)_updateClientSettingsToInterfaceOrientation:(long long)arg1 withAnimationDuration:(double)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HUAppleMusicAccountModule;

@interface HUAppleMusicAccountItemManager : HFItemManager

{
    _Bool _shouldDisableUpdates;
    HUAppleMusicAccountModule *_module;
}

@property (nonatomic) _Bool shouldDisableUpdates;
@property (nonatomic, readonly) HUAppleMusicAccountModule *module;

- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithMediaProfileContainer:(id)arg1 delegate:(id)arg2;
- (void)_moduleStateDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetView.h>

@class NSArray, NSMutableDictionary, NSString, OFUIView, OKTransition;

@interface OKWidgetGroupView : OKWidgetView

{
    long long _index;
    NSArray *_items;
    NSMutableDictionary *_itemWidgetViews;
    OKWidgetView *_currentWidgetView;
    OKTransition *_transition;
    NSString *_switchActionScript;
    _Bool _autoplay;
    _Bool _loop;
    _Bool _isPlaying;
    double _itemDuration;
    _Bool _isInTransition;
    struct UIEdgeInsets _itemEdgeInsets;
    OFUIView *_itemContainerView;
}

@property (nonatomic, readonly) _Bool isPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;

- (void)dealloc;
- (id)valueForUndefinedKey:(id)arg1;
- (void)layoutSubviews;
- (void)_stop;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (void)prepareForReload;
- (void)_play;
- (id)initWithWidget:(id)arg1;
- (void)setSettingItems:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)setSettingAutoplay:(_Bool)arg1;
- (void)setSettingLoop:(_Bool)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (id)collectionItemAtIndexPath:(id)arg1;
- (void)prepareForRefresh;
- (id)layoutSettingsKeys;
- (void)setSettingTransition:(id)arg1;
- (void)setAntialiasing:(_Bool)arg1;
- (unsigned long long)collectionItemsCount;
- (id)collectionItemsNames;
- (id)collectionItemForName:(id)arg1;
- (struct CGRect)itemContainerRect;
- (long long)rotatedIndexForIndex:(long long)arg1;
- (id)_widgetViewForIndex:(long long)arg1;
- (void)_updateDisplayedWidgetViews;
- (id)_previousWidgetView;
- (id)_nextWidgetView;
- (void)_prepareAllForUnload:(_Bool)arg1 except:(id)arg2;
- (void)_transitionToIndex:(long long)arg1 withTransition:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_reloadWidgetViews;
- (void)_gotoIndex:(long long)arg1;
- (void)_transitionToIndex:(long long)arg1 forward:(_Bool)arg2 andLocation:(struct CGPoint)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_gotoNextIndex;
- (void)_jsTransitionToIndex:(long long)arg1 forward:(_Bool)arg2 andLocation:(struct CGPoint)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_jsTransitionToIndex:(long long)arg1 withTransition:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_jsGotoIndex:(long long)arg1;
- (id)settingTransition;
- (void)setSettingIndex:(long long)arg1;
- (long long)settingIndex;
- (void)setSettingItemDuration:(double)arg1;
- (void)setSettingSwitchActionScript:(id)arg1;
- (struct UIEdgeInsets)settingItemEdgeInsets;
- (void)setSettingItemEdgeInsets:(struct UIEdgeInsets)arg1;

@end

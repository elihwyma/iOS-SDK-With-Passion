/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKNavigatorScrollViewControllerProxy.h>

@class UIPushBehavior;

@interface OKNavigatorScrollViewController : OKNavigatorScrollViewControllerProxy

{
    UIPushBehavior *_velocityPushBehavior;
}

+ (id)supportedSettings;

- (void)dealloc;
- (struct CGSize)contentSize;
- (void)commonInit;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)viewDidLoad;
- (struct CGPoint)contentOffset;
- (struct CGRect)contentBounds;
- (id)dynamicsPushBehaviors;
- (id)layoutSettingsKeys;
- (void)pushWatchdog:(id)arg1;
- (void)setSettingContentSize:(struct CGSize)arg1;
- (struct CGSize)settingContentSize;
- (void)setSettingIndicatorStyle:(unsigned long long)arg1;
- (void)setSettingAlwaysBounceVertical:(_Bool)arg1;
- (void)setSettingAlwaysBounceHorizontal:(_Bool)arg1;
- (void)setSettingShowsVerticalScrollIndicator:(_Bool)arg1;
- (void)setSettingShowsHorizontalScrollIndicator:(_Bool)arg1;

@end

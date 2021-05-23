/*
 Image: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
 */

#import <UIKit/UIWindow.h>

@class CRSUIApplicationSceneSettingsDiffInspector, NSLayoutConstraint, NSString, UILayoutGuide;

@interface CRSUIWindow : UIWindow

{
    UILayoutGuide *_notificationLayoutGuide;
    CRSUIApplicationSceneSettingsDiffInspector *_settingsDiffInspector;
    double _bannerHeight;
    NSLayoutConstraint *_heightConstraint;
}

@property (retain, nonatomic) CRSUIApplicationSceneSettingsDiffInspector *settingsDiffInspector;
@property (nonatomic) double bannerHeight;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (nonatomic, readonly) UILayoutGuide *notificationLayoutGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_settings;
- (id)initWithWindowScene:(id)arg1;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (void)notificationLayoutGuideDidChange;

@end

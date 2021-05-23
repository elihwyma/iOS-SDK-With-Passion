/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class NSString, SBDeviceApplicationSceneHandle, UIApplicationSceneClientSettingsDiffInspector;

@interface SBNubView : UIView

{
    UIView *_nubView;
    UIApplicationSceneClientSettingsDiffInspector *_applicationSceneClientSettingsDiffInspector;
    _Bool _highlighted;
    SBDeviceApplicationSceneHandle *_deviceApplicationSceneHandle;
}

@property (nonatomic, readonly) SBDeviceApplicationSceneHandle *deviceApplicationSceneHandle;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)height;
+ (double)hitTestWidth;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (id)initWithDeviceApplicationSceneHandle:(id)arg1;
- (void)_updateNubViewOverrideUserInterfaceStyleAndBackgroundColor;
- (void)_updateNubViewBackgroundColor;

@end

/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIScene, UIWindowScene, _UIBannerContainerView, _UIBannerWindow;

@interface _UIBannerManager : NSObject

{
    UIWindowScene *_windowScene;
    _UIBannerWindow *_window;
    _UIBannerContainerView *_containerView;
}

@property (retain, nonatomic) UIWindowScene *windowScene;
@property (retain, nonatomic) _UIBannerWindow *window;
@property (retain, nonatomic) _UIBannerContainerView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;

- (id)initWithScene:(id)arg1;
- (id)bannerWithContent:(id)arg1;
- (void)_createWindowIfNeeded;

@end

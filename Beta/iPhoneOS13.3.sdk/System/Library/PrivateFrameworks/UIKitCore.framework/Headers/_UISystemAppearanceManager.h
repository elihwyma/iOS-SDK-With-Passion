/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIScene, UIWindowScene;

__attribute__((visibility("hidden")))
@interface _UISystemAppearanceManager : NSObject

{
    _Bool _homeIndicatorAutoHidden;
    unsigned long long _screenEdgesDeferringSystemGestures;
    long long _userInterfaceStyle;
    long long _whitePointAdaptivityStyle;
    UIWindowScene *_windowScene;
}

@property (retain, nonatomic) UIWindowScene *windowScene;
@property (nonatomic, readonly) _Bool homeIndicatorAutoHidden;
@property (nonatomic, readonly) unsigned long long screenEdgesDeferringSystemGestures;
@property (nonatomic, readonly) long long userInterfaceStyle;
@property (nonatomic, readonly) long long whitePointAdaptivityStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;

- (id)initWithScene:(id)arg1;
- (void)updateScreenEdgesDeferringSystemGestures;
- (void)updateHomeIndicatorAutoHidden;
- (void)updateUserInterfaceStyle;
- (void)updateWhitePointAdaptivityStyle;

@end

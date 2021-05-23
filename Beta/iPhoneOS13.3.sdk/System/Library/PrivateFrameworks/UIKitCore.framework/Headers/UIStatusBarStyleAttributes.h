/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIStatusBarForegroundStyleAttributes, UIStatusBarStyleRequest;

__attribute__((visibility("hidden")))
@interface UIStatusBarStyleAttributes : NSObject <Swift>

{
    UIStatusBarStyleRequest *_request;
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
    _Bool _pulsingAnimationEnabled;
}

@property (nonatomic) double foregroundAlpha;
@property (nonatomic, getter=isPulsingAnimationEnabled) _Bool pulsingAnimationEnabled;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)style;
- (long long)idiom;
- (_Bool)isTranslucent;
- (id)initWithRequest:(id)arg1;
- (double)heightForOrientation:(long long)arg1;
- (_Bool)usesVerticalLayout;
- (long long)legibilityStyle;
- (id)foregroundStyle;
- (double)glowAnimationDuration;
- (_Bool)shouldShowInternalItemType:(int)arg1 withScreenCapabilities:(id)arg2;
- (long long)tapButtonType;
- (double)heightForMetrics:(long long)arg1;
- (id)backgroundImageName;
- (_Bool)isLockScreen;
- (_Bool)shouldProduceReturnEvent;
- (_Bool)isTransparent;
- (_Bool)shouldUseVisualAltitude;
- (id)backgroundColorWithTintColor:(id)arg1;
- (id)newForegroundStyleWithHeight:(double)arg1;
- (_Bool)isDoubleHeight;
- (_Bool)supportsRasterization;

@end

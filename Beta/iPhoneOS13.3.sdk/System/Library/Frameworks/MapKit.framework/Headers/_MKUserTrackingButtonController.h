/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIActivityIndicatorView, UIButton, UIImageView;

@protocol MKUserTrackingButtonTarget, MKUserTrackingView;

__attribute__((visibility("hidden")))
@interface _MKUserTrackingButtonController : NSObject

{
    id <MKUserTrackingButtonTarget> _target;
    id <MKUserTrackingView> _userTrackingView;
    long long _state;
    UIImageView *_imageView;
    UIButton *_button;
    UIActivityIndicatorView *_activityIndicatorView;
    unsigned long long _buttonBehavior;
}

@property (weak, nonatomic) id <MKUserTrackingView> userTrackingView;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long buttonBehavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_updateState;
- (id)_symbolConfiguration;
- (id)_activityIndicatorView;
- (void)_goToNextMode:(id)arg1;
- (id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2;
- (void)_setupPreferredSymbolConfiguration;
- (void)_authorizationStatusChanged:(id)arg1;
- (_Bool)_shouldAnimateFromState:(long long)arg1 toState:(long long)arg2;
- (id)_shrinkAnimation;
- (id)_contentAnimation;
- (void)_reloadState;
- (void)_updateLoading;
- (id)_expandAnimation;
- (id)initWithTarget:(id)arg1 userTrackingView:(id)arg2 imageView:(id)arg3 button:(id)arg4;

@end

/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <Foundation/NSObject.h>

@class FBSDisplayConfiguration, FBSSceneParameters;

@interface AFUISceneConfiguration : NSObject

{
    FBSDisplayConfiguration *_displayConfigruation;
    _Bool _foreground;
    _Bool _takeAssertionsWhenInBackground;
    _Bool _cancelSceneLoadingAfterTimeout;
    long long _launchIntent;
    long long _preferredDeferralMode;
    double _sceneLoadingTimeOutDuration;
    FBSSceneParameters *_sceneParameters;
    long long _userInterfaceStyle;
    struct CGRect _initialBounds;
    struct CGRect _bounds;
}

@property (nonatomic) struct CGRect bounds;
@property (nonatomic) _Bool foreground;
@property (nonatomic) long long launchIntent;
@property (nonatomic) _Bool takeAssertionsWhenInBackground;
@property (nonatomic) long long preferredDeferralMode;
@property (nonatomic) _Bool cancelSceneLoadingAfterTimeout;
@property (nonatomic) double sceneLoadingTimeOutDuration;
@property (nonatomic, readonly) struct CGRect initialBounds;
@property (copy, nonatomic) FBSSceneParameters *sceneParameters;
@property (nonatomic) long long userInterfaceStyle;

+ (id)stringForDeactivationReason:(unsigned long long)arg1;
+ (id)defaultSiriSceneConfigurationWithInitialBounds:(struct CGRect)arg1 onDisplay:(id)arg2;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setupPlatformSpecificDefaultSettings;
- (void)configureMutableSceneSettings:(id)arg1;
- (id)_initWithInitialBounds:(struct CGRect)arg1 displayConfiguration:(id)arg2;

@end

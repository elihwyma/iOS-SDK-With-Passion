/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSDictionary, NSString, NSUserActivity, UICanvas, UIScene, UISceneConfiguration;

@interface UISceneSession : NSObject <Swift>

{
    UIScene *_scene;
    NSString *_role;
    NSString *_persistentIdentifier;
    UISceneConfiguration *_configuration;
    NSUserActivity *_stateRestorationActivity;
    NSDictionary *_userInfo;
    struct {
        unsigned int _userInfoIsCurrent:1;
        unsigned int _stateRestorationActivityIsDirty:1;
        unsigned int _stateRestorationActivityIsCurrent:1;
        unsigned int _trackingSessionRequest:1;
        unsigned int _configurationIsDirty:1;
        unsigned int _userInfoIsDirty:1;
    } _sessionFlags;
}

@property (nonatomic, readonly) UICanvas *representedCanvas;
@property (nonatomic, readonly) long long systemType;
@property (nonatomic, readonly) Class canvasSubclass;
@property (nonatomic, readonly) _Bool _configurationNeedsReevalulation;
@property (nonatomic, setter=_setTrackingRefreshRequest:) _Bool _trackingRefreshRequest;
@property (nonatomic, setter=_setConfigurationIsDirty:) _Bool _configurationIsDirty;
@property (nonatomic, setter=_setUserInfoIsDirty:) _Bool _userInfoIsDirty;
@property (nonatomic, setter=_setStateRestorationActivityIsDirty:) _Bool _stateRestorationActivityIsDirty;
@property (weak, nonatomic, readonly) UIScene *scene;
@property (nonatomic, readonly) NSString *role;
@property (copy, nonatomic, readonly) UISceneConfiguration *configuration;
@property (nonatomic, readonly) NSString *persistentIdentifier;
@property (retain, nonatomic) NSUserActivity *stateRestorationActivity;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (_Bool)supportsSecureCoding;
+ (id)defaultCanvasRepresentation;
+ (id)canvasRepresentationForSystemType:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (void)_setScene:(id)arg1;
- (Class)delegateClass;
- (void)_loadStateRestorationActivityIfNeeded;
- (void)_loadUserInfo;
- (id)_initWithIdentifier:(id)arg1 sessionRole:(id)arg2 configurationName:(id)arg3;
- (void)_updateConfiguration:(id)arg1;
- (void)_resetStateRestorationToActivity:(id)arg1;
- (void)_clearAllDirtyFlags;
- (id)_copyWithoutUserInfo;

@end

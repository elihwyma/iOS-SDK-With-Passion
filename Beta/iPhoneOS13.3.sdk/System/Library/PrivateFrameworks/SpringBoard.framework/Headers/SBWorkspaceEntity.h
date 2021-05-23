/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBActivationSettings, SBDeactivationSettings;

@interface SBWorkspaceEntity : NSObject <Swift>

{
    NSString *_identifier;
    long long _layoutRole;
    SBActivationSettings *_activationSettings;
    SBDeactivationSettings *_deactivationSettings;
    long long __mainDisplayPreferredInterfaceOrientation;
}

@property (nonatomic, readonly) _Bool isPreviousWorkspaceEntity;
@property (nonatomic, readonly) _Bool isEmptyWorkspaceEntity;
@property (nonatomic, readonly) _Bool isHomeScreenEntity;
@property (nonatomic, getter=_mainDisplayPreferredInterfaceOrientation, setter=_setMainDisplayPreferredInterfaceOrientation:) long long _mainDisplayPreferredInterfaceOrientation;
@property (nonatomic) long long layoutRole;
@property (nonatomic, readonly) SBActivationSettings *activationSettings;
@property (nonatomic, readonly) SBDeactivationSettings *deactivationSettings;
@property (nonatomic, readonly) _Bool supportsPresentationAtAnySize;
@property (nonatomic, readonly) _Bool wantsExclusiveForeground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) unsigned long long supportedLayoutRoles;
@property (nonatomic, readonly) unsigned long long layoutAttributes;
@property (nonatomic, readonly) Class viewControllerClass;
@property (copy, nonatomic, readonly) CDUnknownBlockType entityGenerator;

+ (id)entity;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (CDUnknownBlockType)_generator;
- (_Bool)boolForActivationSetting:(unsigned int)arg1;
- (id)objectForActivationSetting:(unsigned int)arg1;
- (void)applyActivationSettings:(id)arg1;
- (void)setObject:(id)arg1 forActivationSetting:(unsigned int)arg2;
- (void)setFlag:(long long)arg1 forActivationSetting:(unsigned int)arg2;
- (id)applicationSceneEntity;
- (long long)flagForActivationSetting:(unsigned int)arg1;
- (_Bool)supportsLayoutRole:(long long)arg1;
- (_Bool)isDeviceApplicationSceneEntity;
- (_Bool)isInlineAppExposeWorkspaceEntity;
- (id)inlineAppExposeWorkspaceEntity;
- (_Bool)isApplicationSceneEntity;
- (id)objectForDeactivationSetting:(unsigned int)arg1;
- (_Bool)isAnalogousToEntity:(id)arg1;
- (_Bool)_supportsLayoutRole:(long long)arg1;
- (id)deviceApplicationSceneEntity;
- (id)copyActivationSettings;
- (void)clearActivationSettings;
- (void)setPreferredInterfaceOrientation:(long long)arg1 onDisplayWithIdentity:(id)arg2;
- (void)applyDeactivationSettings:(id)arg1;
- (void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned int)arg2;
- (long long)flagForDeactivationSetting:(unsigned int)arg1;
- (_Bool)boolForDeactivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forDeactivationSetting:(unsigned int)arg2;
- (id)copyDeactivationSettings;
- (void)clearDeactivationSettings;
- (_Bool)hasLayoutAttributes:(unsigned long long)arg1;
- (long long)preferredInterfaceOrientationOnDisplayWithIdentity:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayChangeSettings:(id)arg2;

@end

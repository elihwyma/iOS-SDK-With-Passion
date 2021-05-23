/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class BSMutableSettings, NSDictionary, NSSet, NSString, UIColor, UIMutableTransformer, UITransformer;

@interface UIScenePresentationContext : NSObject <Swift>

{
    BSMutableSettings *_settings;
    UIScenePresentationContext *_defaultPresentationContext;
    UIMutableTransformer *_transformer;
}

@property (nonatomic, readonly) UIScenePresentationContext *_defaultPresentationContext;
@property (copy, nonatomic, readonly) NSSet *_exclusiveLayerTargetsToInclude;
@property (copy, nonatomic, readonly) NSSet *_layerTargetsToExclude;
@property (nonatomic, readonly, getter=_isVisibilityPropagationEnabled) _Bool _visibilityPropagationEnabled;
@property (copy, nonatomic, readonly) NSString *_minificationFilterName;
@property (nonatomic, readonly, getter=isClippingDisabled) _Bool clippingDisabled;
@property (nonatomic, readonly) unsigned long long appearanceStyle;
@property (copy, nonatomic, readonly) UIColor *backgroundColorWhileHosting;
@property (copy, nonatomic, readonly) UIColor *backgroundColorWhileNotHosting;
@property (nonatomic, readonly) unsigned long long presentedLayerTypes;
@property (copy, nonatomic, readonly) NSDictionary *layerPresentationOverrides;
@property (copy, nonatomic, readonly) UITransformer *hostTransformer;
@property (nonatomic, readonly) unsigned long long renderingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_initWithDefaultPresentationContext:(id)arg1;
- (id)_initWithSettings:(id)arg1 defaultPresentationContext:(id)arg2;
- (id)_initWithPresentationContext:(id)arg1;
- (id)_initWithDefaultValues;

@end

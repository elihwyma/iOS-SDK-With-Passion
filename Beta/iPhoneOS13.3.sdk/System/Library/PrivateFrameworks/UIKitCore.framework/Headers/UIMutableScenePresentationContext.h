/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIScenePresentationContext.h>

@class NSSet, NSString, UIColor, UITransformer;

@interface UIMutableScenePresentationContext : UIScenePresentationContext

@property (retain, nonatomic, setter=_setDefaultPresentationContext:) UIScenePresentationContext *_defaultPresentationContext;
@property (copy, nonatomic, setter=_setExclusiveLayerTargetsToInclude:) NSSet *_exclusiveLayerTargetsToInclude;
@property (copy, nonatomic, setter=_setLayerTargetsToExclude:) NSSet *_layerTargetsToExclude;
@property (nonatomic, getter=_isVisibilityPropagationEnabled, setter=_setVisibilityPropagationEnabled:) _Bool _visibilityPropagationEnabled;
@property (copy, nonatomic, setter=_setMinificationFilterName:) NSString *_minificationFilterName;
@property (nonatomic, getter=isClippingDisabled) _Bool clippingDisabled;
@property (nonatomic) unsigned long long appearanceStyle;
@property (copy, nonatomic) UIColor *backgroundColorWhileHosting;
@property (copy, nonatomic) UIColor *backgroundColorWhileNotHosting;
@property (nonatomic) unsigned long long presentedLayerTypes;
@property (copy, nonatomic) UITransformer *hostTransformer;
@property (nonatomic) unsigned long long renderingMode;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_existingLayerPresentationContextCreatingIfNecessary:(_Bool)arg1;
- (void)modifyLayerPresentationOverrideContextForLayerTarget:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeLayerPresentationOverrideForLayerTarget:(id)arg1;
- (void)removeAllLayerPresentationOverrides;
- (void)resetToDefaults;

@end

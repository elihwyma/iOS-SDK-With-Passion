/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UITransformer;

@interface UISceneLayerPresentationContext : NSObject <Swift>

{
    UITransformer *_transformer;
    double _alpha;
    _Bool _hidden;
    _Bool _clippingDisabled;
    unsigned long long _renderingMode;
    NSString *_minificationFilterName;
}

@property (retain, nonatomic) UITransformer *transformer;
@property (nonatomic) double alpha;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (nonatomic, getter=isClippingDisabled) _Bool clippingDisabled;
@property (nonatomic) unsigned long long renderingMode;
@property (copy, nonatomic, setter=_setMinificationFilterName:) NSString *_minificationFilterName;
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
- (id)_initWithSceneLayerPresentationContext:(id)arg1;
- (_Bool)_isEqualToDefaultContext;

@end

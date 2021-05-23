/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UISceneLayerPresentationContext.h>

@class UITransformer;

@interface UIMutableSceneLayerPresentationContext : UISceneLayerPresentationContext

@property (nonatomic) double alpha;
@property (retain, nonatomic) UITransformer *transformer;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (nonatomic, getter=isClippingDisabled) _Bool clippingDisabled;
@property (nonatomic) unsigned long long renderingMode;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end

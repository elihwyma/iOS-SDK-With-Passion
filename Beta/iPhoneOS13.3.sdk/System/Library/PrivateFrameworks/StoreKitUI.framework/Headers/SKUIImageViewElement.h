/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, NSURL, SKUIImageViewElementCacheKey, UIColor;

@interface SKUIImageViewElement : SKUIViewElement

{
    NSString *_alt;
    NSString *_entityResourceName;
    NSURL *_entityURL;
    BOOL _enabled;
    _Bool _hasValidEntityValues;
    SKUIImageViewElementCacheKey *_resourceCacheKey;
    NSString *_resourceName;
    struct CGSize _shadowOffset;
    double _shadowRadius;
    UIColor *_shadowColor;
    struct CGSize _size;
    SKUIImageViewElementCacheKey *_transientResourceCacheKey;
    NSURL *_url;
    float _layerShadowOpacity;
    double _layerShadowRadius;
    struct CGSize _layerShadowOffset;
}

@property (nonatomic) float layerShadowOpacity;
@property (nonatomic) struct CGSize layerShadowOffset;
@property (nonatomic) double layerShadowRadius;
@property (nonatomic) struct CGSize shadowOffset;
@property (nonatomic) double shadowRadius;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic, readonly) id resourceCacheKey;
@property (nonatomic, readonly) id transientResourceCacheKey;
@property (nonatomic, readonly) NSString *resourceName;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) NSURL *URL;

- (_Bool)isEnabled;
- (id)accessibilityText;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (_Bool)rendersWithParallax;
- (_Bool)rendersWithPerspective;
- (long long)pageComponentType;
- (void)entityValueProviderDidChange;
- (void)_loadEntityValuesIfNeeded;
- (id)uniquingMapKey;
- (id)entityValueProperties;

@end

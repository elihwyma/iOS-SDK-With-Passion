/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class UIImage;

@interface HKFillStyle : NSObject

{
    UIImage *_cachedImage;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clearCache;
- (void)_renderCacheIfNecessaryForHeight:(double)arg1 usingTraitCollection:(id)arg2;
- (void)_renderCacheIfNecessaryForWidth:(double)arg1 usingTraitCollection:(id)arg2;
- (void)_renderCacheIfNecessaryForSize:(struct CGSize)arg1 usingTraitCollection:(id)arg2;
- (_Bool)_needsRenderForSize:(struct CGSize)arg1;
- (void)_renderInContext:(struct CGContext *)arg1 size:(struct CGSize)arg2;
- (id)fillImageWithHeight:(double)arg1 usingTraitCollection:(id)arg2;
- (id)fillImageWithWidth:(double)arg1 usingTraitCollection:(id)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@interface VKIconImage : NSObject

{
    shared_ptr_611acf5c _iconImage;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> _fillColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> _haloColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> _glyphColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> _calloutFillColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> _calloutHaloColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> _calloutTextColor;
}

- (id).cxx_construct;
- (struct CGImage *)image;
- (float)opacity;
- (struct CGColor *)fillColor;
- (struct CGSize)imageSize;
- (float)contentScale;
- (struct CGColor *)glyphColor;
- (struct CGColor *)calloutHaloColor;
- (struct CGColor *)haloColor;
- (struct CGColor *)calloutFillColor;
- (_Bool)isBalloonShape;
- (unsigned int)calloutShape;
- (struct CGColor *)calloutTextColor;
- (id)init:(shared_ptr_611acf5c)arg1;

@end

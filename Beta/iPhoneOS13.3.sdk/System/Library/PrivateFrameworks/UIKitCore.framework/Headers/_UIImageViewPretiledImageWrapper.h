/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIImage, _UIImageViewPretiledImageCacheKey;

__attribute__((visibility("hidden")))
@interface _UIImageViewPretiledImageWrapper : NSObject

{
    UIImage *_pretiledImage;
    _UIImageViewPretiledImageCacheKey *_cacheKey;
}

@property (nonatomic, readonly) UIImage *pretiledImage;

+ (id)cacheValueWithPretiledImage:(id)arg1 cacheKey:(id)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end

/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIImageViewPretiledImageCacheKey : NSObject

{
    UIImage *_originalImage;
    struct CGSize _pretiledSize;
}

+ (id)cacheKeyWithOriginalImage:(id)arg1 pretiledSize:(struct CGSize)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end

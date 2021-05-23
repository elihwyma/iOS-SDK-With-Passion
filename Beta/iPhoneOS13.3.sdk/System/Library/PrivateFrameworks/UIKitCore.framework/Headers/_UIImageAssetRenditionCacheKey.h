/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIImageAssetRenditionCacheKey : NSObject

{
    UIColor *resolvedTintColor;
    NSString *appearanceName;
    struct CGSize _size;
    unsigned int _drawMode;
    struct {
        unsigned int bold:1;
        unsigned int letterpress:1;
    } _flags;
}

+ (id)keyWithSize:(struct CGSize)arg1 unresolvedTintColor:(id)arg2 traitCollection:(id)arg3 bold:(_Bool)arg4 letterpress:(_Bool)arg5 drawMode:(unsigned int)arg6;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

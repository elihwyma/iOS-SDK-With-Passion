/*
 Image: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
 */

#import <Foundation/NSObject.h>

@interface USKResourcePath : NSObject

{
    struct SdfAssetPath _path;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)path;
- (id).cxx_construct;
- (id)resolvedPath;
- (struct SdfAssetPath)sdfAssetPath;
- (id)initWithSdfAssetPath:(struct SdfAssetPath)arg1;

@end

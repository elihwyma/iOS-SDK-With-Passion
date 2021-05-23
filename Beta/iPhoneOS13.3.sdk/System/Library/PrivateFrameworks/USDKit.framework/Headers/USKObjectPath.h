/*
 Image: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
 */

#import <Foundation/NSObject.h>

@interface USKObjectPath : NSObject

{
    struct SdfPath _path;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)stringValue;
- (id)initWithString:(id)arg1;
- (struct SdfPath)path;
- (id).cxx_construct;
- (id)initWithToken:(id)arg1;
- (id)propertyName;
- (id)pathByAppendingPropertyComponent:(id)arg1;
- (id)tokenValue;
- (id)initWithSdfPath:(struct SdfPath)arg1;
- (_Bool)isNodePath;
- (id)nodePath;
- (_Bool)isPropertyPath;

@end

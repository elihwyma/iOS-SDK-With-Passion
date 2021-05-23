/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface OADPoint3D : NSObject <Swift>

{
    float mX;
    float mY;
    float mZ;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)x;
- (float)y;
- (float)z;
- (id)initWithX:(float)arg1 y:(float)arg2 z:(float)arg3;

@end

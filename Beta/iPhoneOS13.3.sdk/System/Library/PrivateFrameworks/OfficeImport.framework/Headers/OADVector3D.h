/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface OADVector3D : NSObject <Swift>

{
    float mDx;
    float mDy;
    float mDz;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)dx;
- (float)dy;
- (float)dz;
- (id)initWithDx:(float)arg1 dy:(float)arg2 dz:(float)arg3;

@end

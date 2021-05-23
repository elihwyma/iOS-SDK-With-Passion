/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface OADRotation3D : NSObject <Swift>

{
    float mLatitude;
    float mLongitude;
    float mRevolution;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)latitude;
- (float)longitude;
- (float)revolution;
- (id)initWithLatitude:(float)arg1 longitude:(float)arg2 revolution:(float)arg3;

@end

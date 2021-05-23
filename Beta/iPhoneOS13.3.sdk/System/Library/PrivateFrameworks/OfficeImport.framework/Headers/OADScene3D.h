/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class OADBackdrop, OADCamera, OADLightRig;

__attribute__((visibility("hidden")))
@interface OADScene3D : NSObject <Swift>

{
    OADCamera *mCamera;
    OADLightRig *mLightRig;
    OADBackdrop *mBackdrop;
}

+ (id)nullScene3D;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setBackdrop:(id)arg1;
- (id)backdrop;
- (void)setCamera:(id)arg1;
- (id)camera;
- (void)setLightRig:(id)arg1;
- (id)lightRig;

@end

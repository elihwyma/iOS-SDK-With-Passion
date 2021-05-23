/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class OADRotation3D;

__attribute__((visibility("hidden")))
@interface OADLightRig : NSObject <Swift>

{
    OADRotation3D *mRotation;
    int mType;
    int mDirection;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)direction;
- (void)setDirection:(int)arg1;
- (id)rotation;
- (void)setRotation:(id)arg1;

@end

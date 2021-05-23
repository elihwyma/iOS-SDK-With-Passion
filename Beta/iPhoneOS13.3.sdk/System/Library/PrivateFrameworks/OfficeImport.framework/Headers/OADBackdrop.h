/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class OADPoint3D, OADVector3D;

__attribute__((visibility("hidden")))
@interface OADBackdrop : NSObject <Swift>

{
    OADPoint3D *mAnchor;
    OADVector3D *mNormal;
    OADVector3D *mUp;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)normal;
- (id)anchor;
- (void)setAnchor:(id)arg1;
- (void)setUp:(id)arg1;
- (id)up;
- (void)setNormal:(id)arg1;

@end

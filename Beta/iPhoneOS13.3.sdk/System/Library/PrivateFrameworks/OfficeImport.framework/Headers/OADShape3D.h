/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class OADBevel, OADColor;

__attribute__((visibility("hidden")))
@interface OADShape3D : NSObject <Swift>

{
    OADBevel *mTopBevel;
    OADBevel *mBottomBevel;
    OADColor *mExtrusionColor;
    float mExtrusionHeight;
    OADColor *mContourColor;
    float mContourWidth;
    float mShapeDepth;
    int mMaterial;
}

+ (id)nullShape3D;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)material;
- (void)setMaterial:(int)arg1;
- (void)setTopBevel:(id)arg1;
- (void)setBottomBevel:(id)arg1;
- (void)setExtrusionColor:(id)arg1;
- (void)setContourColor:(id)arg1;
- (void)setShapeDepth:(float)arg1;
- (void)setExtrusionHeight:(float)arg1;
- (void)setContourWidth:(float)arg1;
- (float)shapeDepth;
- (float)extrusionHeight;
- (float)contourWidth;
- (id)topBevel;
- (id)bottomBevel;
- (id)extrusionColor;
- (id)contourColor;

@end

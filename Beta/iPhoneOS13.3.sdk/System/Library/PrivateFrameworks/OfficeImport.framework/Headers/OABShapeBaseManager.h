/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OABFillPropertiesManager.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OABShapeBaseManager : OABFillPropertiesManager <Swift>

{
    struct EshShapeBase *mShapeBase;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct EshColor)shadowColor;
- (int)shadowAlpha;
- (int)strokeWidth;
- (int)shadowOffsetX;
- (int)shadowOffsetY;
- (int)shadowType;
- (_Bool)isStroked;
- (struct EshColor)strokeFgColor;
- (struct EshColor)strokeBgColor;
- (id)initWithShapeBase:(struct EshShapeBase *)arg1 shapeType:(int)arg2 masterShape:(struct EshShape *)arg3;
- (int)strokeFillType;
- (unsigned int)strokeFillBlipID;
- (id)strokeFillBlipName;
- (struct EshBlip *)strokeFillBlipDataReference;
- (int)strokeFgAlpha;
- (int)strokeMiterLimit;
- (int)strokeCompoundType;
- (int)strokePresetDash;
- (const struct EshTablePropVal<int> *)strokeCustomDash;
- (int)strokeCapStyle;
- (int)strokeJoinStyle;
- (int)strokeStartArrowType;
- (int)strokeStartArrowWidth;
- (int)strokeStartArrowLength;
- (int)strokeEndArrowType;
- (int)strokeEndArrowWidth;
- (int)strokeEndArrowLength;
- (_Bool)isShadowed;
- (int)shadowSoftness;

@end

/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OABShapeGeometry : NSObject

+ (void)readFromShape:(struct EshShape *)arg1 toShape:(id)arg2;
+ (void)readAdjustValuesFromShapeProperties:(const struct EshShapeProperties *)arg1 toGeometry:(id)arg2;
+ (void)readGeometryCoordSpaceFromShapeProperties:(const struct EshShapeProperties *)arg1 toGeometry:(id)arg2;
+ (void)readLimoFromPath:(const struct EshPath *)arg1 toGeometry:(id)arg2;
+ (void)readFromFormulas:(const EshTablePropVal_31f0d5cf *)arg1 toGeometry:(id)arg2;
+ (void)readFromTextBoxRects:(const EshTablePropVal_515d12a1 *)arg1 toGeometry:(id)arg2;
+ (void)readPathCommandsAndParamsFromPath:(const struct EshPath *)arg1 toGeometry:(id)arg2;
+ (struct OADAdjustCoord)adjustCoordWithComputedValue:(struct EshComputedValue)arg1;
+ (int)actualPathCommandForPathCommand:(int)arg1 index:(unsigned short)arg2;
+ (struct EshComputedValue)computedValueWithAdjustCoord:(struct OADAdjustCoord)arg1;
+ (void)appendAdjustPoint:(struct OADAdjustPoint)arg1 toPathParams:(struct EshPathParamTable *)arg2;
+ (void)writeAdjustValuesFromGeometry:(id)arg1 toShapeProperties:(struct EshShapeProperties *)arg2;
+ (void)writeCoordSpaceFromGeometry:(id)arg1 toShape:(struct EshShape *)arg2;
+ (void)writeLimoFromGeometry:(id)arg1 toPath:(struct EshPath *)arg2;
+ (void)writePathCommandsAndParamsFromGeometry:(id)arg1 toPath:(struct EshPath *)arg2;
+ (void)writeFormulasFromGeometry:(id)arg1 toPath:(struct EshPath *)arg2;
+ (void)writeTextBodyRectsFromGeometry:(id)arg1 toPath:(struct EshPath *)arg2;
+ (void)readFromPathCommands:(const EshTablePropVal_68d7eaa9 *)arg1 pathParams:(const struct EshPathParamTable *)arg2 toGeometry:(id)arg3;
+ (void)readFromLimo:(CsPoint_c846a6ec)arg1 toGeometry:(id)arg2;
+ (void)writeFromShape:(id)arg1 toShape:(struct EshShape *)arg2;

@end

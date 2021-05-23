/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXGeometry : NSObject

+ (id)readPresetGeometryFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readCustomGeometryFromXmlNode:(struct _xmlNode *)arg1 hasImplicitFormulas:(_Bool)arg2 drawingState:(id)arg3;
+ (void)readAdjustValuesFromCustomGeometryXmlNode:(struct _xmlNode *)arg1 toCustomGeometry:(id)arg2 adjustValueNameToIndexMap:(id)arg3 drawingState:(id)arg4;
+ (void)addFormulasFromFile:(id)arg1 toCustomGeometry:(id)arg2 formulaNameToIndexMap:(id)arg3 drawingState:(id)arg4;
+ (void)readFormulasFromCustomGeometryXmlNode:(struct _xmlNode *)arg1 toCustomGeometry:(id)arg2 adjustValueNameToIndexMap:(id)arg3 formulaNameToIndexMap:(id)arg4 drawingState:(id)arg5;
+ (void)readTextRectFromCustomGeometryXmlNode:(struct _xmlNode *)arg1 toCustomGeometry:(id)arg2 formulaNameToIndexMap:(id)arg3 drawingState:(id)arg4;
+ (void)readPathsFromCustomGeometryXmlNode:(struct _xmlNode *)arg1 toCustomGeometry:(id)arg2 formulaNameToIndexMap:(id)arg3 drawingState:(id)arg4;
+ (id)shapeTypeEnumMap;
+ (void)writePath:(id)arg1 coordSpace:(CsRect_0aefebc6)arg2 to:(id)arg3;
+ (id)stringWritingShapeType:(int)arg1;
+ (int)adjustValueWithGuideXmlNode:(struct _xmlNode *)arg1;
+ (id)stringForShapeType:(int)arg1;
+ (id)readFromParentXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (int)shapeTypeForString:(id)arg1;
+ (void)write:(id)arg1 to:(id)arg2;
+ (id)formulaTypeEnumMap;
+ (id)formulaKeywordEnumMap;
+ (struct OADAdjustCoord)readAdjustCoordFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2 formulaNameToIndexMap:(id)arg3;
+ (id)pathFillModeEnumMap;
+ (void)writeShapePathPoint:(struct OADAdjustPoint)arg1 origin:(CsPoint_c846a6ec)arg2 to:(id)arg3;

@end

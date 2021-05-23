/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXTable : NSObject

+ (id)readThemableFillFromParent:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readThemableEffectsFromParent:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readPartStyle:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (void)readPropertiesFromXmlNode:(struct _xmlNode *)arg1 toProperties:(id)arg2 drawingState:(id)arg3;
+ (void)readGridFromXmlNode:(struct _xmlNode *)arg1 toGrid:(id)arg2 drawingState:(id)arg3;
+ (void)readRowsFromTableXmlNode:(struct _xmlNode *)arg1 toTable:(id)arg2 drawingState:(id)arg3;
+ (id)readTableStyle:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (void)cacheTableStylesInPart:(id)arg1 cache:(id)arg2 drawingState:(id)arg3;
+ (id)readDefaultTableStyleWithDrawingState:(id)arg1;
+ (id)readThemableStrokeFromParent:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readCellBorderStyle:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (int)readOnOffFlag:(id)arg1;
+ (id)readCellStyle:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readTextStyle:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readCellPropertiesFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (void)readCellFromXmlNode:(struct _xmlNode *)arg1 toCell:(id)arg2 drawingState:(id)arg3;
+ (void)readRowFromXmlNode:(struct _xmlNode *)arg1 toRow:(id)arg2 drawingState:(id)arg3;

@end

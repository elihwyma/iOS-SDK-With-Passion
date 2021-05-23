/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXFill : NSObject

+ (id)readNullFillFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readSolidFillFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readGradientFillFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readImageFillFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 forDrawable:(id)arg3 drawingState:(id)arg4;
+ (id)readPresetPatternFillFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readGroupFillFromXmlNode:(struct _xmlNode *)arg1;
+ (void)readStretch:(struct _xmlNode *)arg1 stretch:(id)arg2;
+ (void)readTile:(struct _xmlNode *)arg1 tile:(id)arg2;
+ (id)readBlipRefFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 forDrawable:(id)arg3 drawingState:(id)arg4 forBullet:(_Bool)arg5;
+ (id)readFillFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 drawingState:(id)arg3;
+ (id)tileFlipModeEnumMap;
+ (void)readGradientFillFromXmlNode:(struct _xmlNode *)arg1 toGradientFill:(id)arg2 drawingState:(id)arg3;
+ (id)pathGradientFillTypeEnumMap;
+ (id)readPathGradientFillFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readLinearGradientFillFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)presetPatternFillTypeEnumMap;

@end

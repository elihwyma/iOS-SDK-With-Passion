/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXStroke : NSObject

+ (id)lineCapEnumMap;
+ (id)compoundLineEnumMap;
+ (id)penAlignmentEnumMap;
+ (id)readPresetDashFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readCustomDashFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readLineEndFromXmlNode:(struct _xmlNode *)arg1;
+ (id)lineEndTypeEnumMap;
+ (id)lineEndWidthEnumMap;
+ (id)lineEndLengthEnumMap;
+ (id)presetDashEnumMap;
+ (id)readStrokeFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 drawingState:(id)arg3;

@end

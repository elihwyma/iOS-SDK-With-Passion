/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXColor : NSObject

+ (id)readColorFromNode:(struct _xmlNode *)arg1;
+ (void)writeColor:(id)arg1 to:(id)arg2;
+ (id)readScRgbColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readSRgbColorFromXmlNode:(struct _xmlNode *)arg1 attribute:(const char *)arg2;
+ (id)readHslColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readSystemColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readSchemeColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readPresetColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)presetColorEnumMap;
+ (id)presetColorRGBEnumMap;
+ (id)systemColorEnumMap;
+ (id)stringSRgbColor:(id)arg1;
+ (void)writeRgbColor:(id)arg1 to:(id)arg2;
+ (void)writeSchemeColor:(id)arg1 to:(id)arg2;
+ (void)writeSystemColor:(id)arg1 to:(id)arg2;
+ (void)writePlaceholderColor:(id)arg1 to:(id)arg2;
+ (id)readSchemeColorFromAttribute:(id)arg1;
+ (void)writePresetColor:(id)arg1 to:(id)arg2;
+ (id)schemeColorEnumMap;
+ (id)readColorFromParentXmlNode:(struct _xmlNode *)arg1;
+ (id)readPresetColorFromAttribute:(id)arg1;
+ (id)readSystemColorFromAttribute:(id)arg1;

@end

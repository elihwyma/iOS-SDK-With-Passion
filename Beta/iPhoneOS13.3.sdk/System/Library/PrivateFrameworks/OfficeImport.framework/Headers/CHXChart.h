/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXChart : NSObject

+ (id)readFromXmlDocument:(struct _xmlDoc *)arg1 chartStyleId:(int)arg2 state:(id)arg3;
+ (void)readDefaultTextPropertiesFromXmlNode:(struct _xmlNode *)arg1 chart:(id)arg2 state:(id)arg3;
+ (void)readChartFromXmlNode:(struct _xmlNode *)arg1 chart:(id)arg2 state:(id)arg3;
+ (id)readFromXmlDocument:(struct _xmlDoc *)arg1 state:(id)arg2;
+ (int)chdDisplayBlanksAsEnumFromXmlElement:(struct _xmlNode *)arg1;

@end

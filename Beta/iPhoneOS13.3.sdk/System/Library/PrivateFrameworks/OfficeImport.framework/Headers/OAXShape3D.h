/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXShape3D : NSObject

+ (_Bool)isEmpty:(id)arg1;
+ (id)bevelTypeEnumMap;
+ (id)readBevelFromXmlNode:(struct _xmlNode *)arg1;
+ (id)materialEnumMap;
+ (void)writeBevel:(id)arg1 to:(id)arg2;
+ (id)readShape3DFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 drawingState:(id)arg3;
+ (void)writeShape3D:(id)arg1 to:(id)arg2;
+ (void)writeShape3DMaterialOnly:(id)arg1 to:(id)arg2;

@end

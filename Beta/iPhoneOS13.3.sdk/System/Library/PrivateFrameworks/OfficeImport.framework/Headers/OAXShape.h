/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXShape : NSObject

+ (id)readFromXmlNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 drawingState:(id)arg3;
+ (void)readNonVisualShapeProperties:(struct _xmlNode *)arg1 nodeName:(const char *)arg2 inNamespace:(id)arg3 shapeProperties:(id)arg4;
+ (void)readCoreFromXmlNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 toShape:(id)arg3 drawingState:(id)arg4;
+ (_Bool)isWritable:(id)arg1;

@end

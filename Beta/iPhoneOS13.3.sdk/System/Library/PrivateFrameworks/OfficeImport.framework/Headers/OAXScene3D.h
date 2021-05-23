/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXScene3D : NSObject

+ (id)cameraTypeEnumMap;
+ (id)lightRigTypeEnumMap;
+ (id)lightRigDirectionEnumMap;
+ (id)readCameraFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readLightRigFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readBackdropFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (void)writeBackdrop:(id)arg1 to:(id)arg2;
+ (void)writeCamera:(id)arg1 to:(id)arg2;
+ (void)writeLightRig:(id)arg1 to:(id)arg2;
+ (id)readScene3DFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 drawingState:(id)arg3;
+ (void)writeScene3D:(id)arg1 to:(id)arg2;
+ (_Bool)isEmpty:(id)arg1;
+ (void)writeRotation3D:(id)arg1 to:(id)arg2;

@end

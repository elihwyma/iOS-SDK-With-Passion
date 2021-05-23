/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXBaseTypes : NSObject

+ (long long)readRequiredLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2 desiredOutputUnit:(int)arg3;
+ (long long)readOptionalLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2 desiredOutputUnit:(int)arg3;
+ (long long)readOptionalLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (id)rectAlignmentEnumMap;
+ (id)stringForRectAlignment:(int)arg1;
+ (void)writeRelativeRect:(id)arg1 to:(id)arg2;
+ (void)writeRectAlignment:(int)arg1 to:(id)arg2;
+ (float)readOptionalFractionFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (float)readRequiredFractionFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (double)readRequiredAngleFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (id)readRelativeRectFromXmlNode:(struct _xmlNode *)arg1;
+ (float)readOptionalLengthFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (int)readRectAlignmentFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (id)readRotation3DFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readPoint3DFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readVector3DFromXmlNode:(struct _xmlNode *)arg1;
+ (float)readRequiredLengthFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (double)readOptionalAngleFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (long long)readRequiredLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (struct CGPoint)readPoint2DFromXmlNode:(struct _xmlNode *)arg1;
+ (struct CGSize)readSize2DFromXmlNode:(struct _xmlNode *)arg1;

@end

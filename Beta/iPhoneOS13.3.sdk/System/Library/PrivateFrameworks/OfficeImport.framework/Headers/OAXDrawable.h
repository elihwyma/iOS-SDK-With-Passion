/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXDrawable : NSObject

+ (id)readDrawableFromXmlNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 drawingState:(id)arg3;
+ (void)readNonVisualPropertiesFromDrawableXmlNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 visualNodeName:(const char *)arg3 toDrawable:(id)arg4 drawingState:(id)arg5;
+ (id)readDrawablesFromXmlNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 drawingState:(id)arg3;

@end

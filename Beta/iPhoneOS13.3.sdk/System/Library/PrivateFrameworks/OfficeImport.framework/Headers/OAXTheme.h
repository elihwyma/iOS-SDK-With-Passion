/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXTheme : NSObject

+ (void)readObjectDefaults:(struct _xmlNode *)arg1 theme:(id)arg2 drawingState:(id)arg3;
+ (void)readFromPackagePart:(id)arg1 toTheme:(id)arg2 state:(id)arg3;
+ (void)readFromThemeData:(const char *)arg1 themeDataSize:(unsigned int)arg2 toTheme:(id)arg3 xmlDrawingState:(id)arg4;
+ (void)readDefaultProperties:(struct _xmlNode *)arg1 fallback:(struct _xmlNode *)arg2 defaultProperties:(id)arg3 drawingState:(id)arg4;
+ (void)readObjectDefaultsFromParent:(struct _xmlNode *)arg1 defaultsName:(const char *)arg2 toObjectDefaults:(id)arg3 drawingState:(id)arg4;
+ (struct _xmlNode *)childNamed:(const char *)arg1 inParent:(struct _xmlNode *)arg2 fallbackParent:(struct _xmlNode *)arg3 drawingState:(id)arg4;

@end

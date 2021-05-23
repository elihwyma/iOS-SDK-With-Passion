/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WXShading : NSObject

+ (void)readFrom:(struct _xmlNode *)arg1 to:(id)arg2 state:(id)arg3;
+ (id)shadingStylesEnumMap;
+ (id)getColorFromString:(id)arg1;
+ (id)getColorFromCString:(const char *)arg1;
+ (id)getStringFromColor:(id)arg1;

@end

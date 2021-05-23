/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXColorMap : NSObject

+ (id)mapColorEnumMap;
+ (void)readFromXmlNode:(struct _xmlNode *)arg1 toColorMap:(id)arg2;
+ (void)writeColorMap:(id)arg1 elementName:(id)arg2 to:(id)arg3 state:(id)arg4;

@end

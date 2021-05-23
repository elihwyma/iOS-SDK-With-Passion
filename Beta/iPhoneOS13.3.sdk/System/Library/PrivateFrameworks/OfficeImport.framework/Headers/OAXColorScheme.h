/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXColorScheme : NSObject

+ (void)readFromXmlNode:(struct _xmlNode *)arg1 toColorScheme:(id)arg2;
+ (id)schemeColorEnumMap;
+ (id)colorForScheme:(id)arg1 colorMap:(id)arg2 value:(id)arg3;
+ (id)colorForScheme:(id)arg1 value:(id)arg2;
+ (void)writeColorScheme:(id)arg1 to:(id)arg2 state:(id)arg3;

@end

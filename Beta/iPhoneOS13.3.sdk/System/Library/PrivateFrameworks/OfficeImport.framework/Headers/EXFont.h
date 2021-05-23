/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXFont : NSObject

+ (int)edUnderlineFromXmlUnderlineElement:(struct _xmlNode *)arg1;
+ (int)edScriptFromXmlVertAlignElement:(struct _xmlNode *)arg1;
+ (id)underlineEnumMap;
+ (id)vertAlignEnumMap;
+ (id)edFontFromXmlFontElement:(struct _xmlNode *)arg1 inConditionalFormat:(_Bool)arg2 returnDefaultIfEmpty:(_Bool)arg3 state:(id)arg4;

@end

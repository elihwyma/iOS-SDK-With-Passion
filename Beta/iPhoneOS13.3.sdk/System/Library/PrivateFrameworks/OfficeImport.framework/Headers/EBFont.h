/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBFont : NSObject

+ (id)edFontFromXlDXfFont:(struct XlDXfFont *)arg1 edResources:(id)arg2;
+ (int)convertXlScriptEnumToED:(int)arg1;
+ (int)convertXlUnderlineEnumToED:(int)arg1;
+ (id)edFontFromXlFont:(struct XlFont *)arg1 edResources:(id)arg2;
+ (int)convertEDScriptEnumToXl:(int)arg1;
+ (int)convertEDUnderlineEnumToXl:(int)arg1;

@end

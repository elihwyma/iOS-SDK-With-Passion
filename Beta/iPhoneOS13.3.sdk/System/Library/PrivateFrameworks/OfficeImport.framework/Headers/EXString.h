/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXString : NSObject

+ (id)readStringWithAsciiCodeFromXmlStringElement:(struct _xmlNode *)arg1;
+ (void)buildEDString:(id)arg1 fromNode:(struct _xmlNode *)arg2 edFont:(id)arg3 keepWhitespace:(_Bool)arg4 state:(id)arg5;
+ (void)parseStringWithAsciiCode:(id)arg1;
+ (id)edTextFromXmlStringElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)edStringWithRunsFromXmlStringElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)edStringWithRunsFromXmlDivElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)replaceEscapeAsciiCodes:(id)arg1;
+ (void)buildEDString:(id)arg1 fromText:(id)arg2 edFont:(id)arg3 keepWhitespace:(_Bool)arg4 state:(id)arg5;
+ (void)buildEDString:(id)arg1 fromChildrenOfNode:(struct _xmlNode *)arg2 edFont:(id)arg3 keepWhitespace:(_Bool)arg4 state:(id)arg5;
+ (id)cleanupWhitespace:(id)arg1;
+ (id)stringInEDString:(id)arg1 start:(unsigned long long)arg2 end:(unsigned long long)arg3;
+ (id)stringInEDString:(id)arg1 forRunIndex:(unsigned int)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXString : NSObject

+ (id)chdFormulaFromXmlStrRefElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)edStringFromXmlStrCacheElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)edStringFromXmlRichElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readFromXmlTxElement:(struct _xmlNode *)arg1 formula:(id *)arg2 lastCached:(id *)arg3 state:(id)arg4;

@end

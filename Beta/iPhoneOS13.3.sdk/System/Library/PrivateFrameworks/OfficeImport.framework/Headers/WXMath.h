/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WXMath : NSObject

+ (void)readMathRunFrom:(struct _xmlNode *)arg1 to:(id)arg2 justification:(int)arg3 state:(id)arg4;
+ (void)readMathRootFrom:(struct _xmlNode *)arg1 paragraphNamespace:(struct _xmlNs *)arg2 to:(id)arg3 targetRun:(id)arg4 state:(id)arg5;

@end

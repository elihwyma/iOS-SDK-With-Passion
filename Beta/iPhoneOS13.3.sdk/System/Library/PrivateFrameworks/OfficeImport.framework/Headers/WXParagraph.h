/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WXParagraph : NSObject

+ (void)readRunsTo:(id)arg1 state:(id)arg2;
+ (void)readRunsFrom:(struct _xmlNode *)arg1 paragraphNamespace:(struct _xmlNs *)arg2 to:(id)arg3 targetRun:(id)arg4 state:(id)arg5;
+ (void)readRFrom:(struct _xmlNode *)arg1 to:(id)arg2 targetRun:(id)arg3 state:(id)arg4;
+ (void)readSimpleFieldFrom:(struct _xmlNode *)arg1 paragraphNamespace:(struct _xmlNs *)arg2 to:(id)arg3 state:(id)arg4;
+ (void)readTrackingFrom:(struct _xmlNode *)arg1 paragraphNamespace:(struct _xmlNs *)arg2 to:(id)arg3 state:(id)arg4;
+ (void)readFrom:(struct _xmlNode *)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;
+ (void)readFromString:(id)arg1 to:(id)arg2;
+ (void)readAnnotationFrom:(struct _xmlNode *)arg1 paragraphNamespace:(struct _xmlNs *)arg2 to:(id)arg3 state:(id)arg4;

@end

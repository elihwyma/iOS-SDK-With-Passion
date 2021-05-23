/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXWorkbook : NSObject

+ (void)setupProcessors:(id)arg1;
+ (id)edWorkbookFromState:(id)arg1 package:(id)arg2 reader:(id)arg3 fileName:(id)arg4 temporaryDirectory:(id)arg5 delegate:(id)arg6 forThumbnail:(_Bool)arg7;
+ (void)readStringsFrom:(id)arg1 state:(id)arg2;
+ (id)edWorkbookFromState:(id)arg1 package:(id)arg2 reader:(id)arg3 resourcesOnly:(_Bool)arg4 fileName:(id)arg5 temporaryDirectory:(id)arg6 delegate:(id)arg7 forThumbnail:(_Bool)arg8;
+ (void)readStylesFrom:(id)arg1 state:(id)arg2;
+ (void)readSheetsFrom:(id)arg1 relationNS:(struct _xmlNs *)arg2 state:(id)arg3 delegate:(id)arg4 forThumbnail:(_Bool)arg5;
+ (void)setupDefaultTextStyleWithState:(id)arg1;
+ (void)setDefaultParagraphProperties:(id)arg1;

@end

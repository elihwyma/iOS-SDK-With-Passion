/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBSection : NSObject

+ (void)readHeaderFrom:(id)arg1 type:(int)arg2 index:(int)arg3 header:(id)arg4;
+ (void)mapPrinterSettings:(struct WrdSectionProperties *)arg1 toSection:(id)arg2;
+ (void)mapSectionProperties:(struct WrdSectionProperties *)arg1 toSection:(id)arg2;
+ (void)readFrom:(id)arg1 textRun:(struct WrdSectionTextRun *)arg2 document:(id)arg3 index:(int)arg4 section:(id)arg5;
+ (void)mapSection:(id)arg1 toSectionProperties:(struct WrdSectionProperties *)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBPane : NSObject

+ (void)readXlPaneFrom:(struct XlSheetPresentation *)arg1 state:(id)arg2;
+ (void)writePaneForSheet:(id)arg1 toXlSheetPresentation:(struct XlSheetPresentation *)arg2 xlWindow2:(struct XlWindow2 *)arg3;

@end

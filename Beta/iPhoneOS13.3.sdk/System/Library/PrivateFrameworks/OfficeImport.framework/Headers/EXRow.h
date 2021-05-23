/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXRow : NSObject

+ (void)edRowFrom:(struct _xmlTextReader *)arg1 edRowInfo:(struct EDRowInfo *)arg2 edRowBlock:(id)arg3 edRowBlocks:(id)arg4 state:(id)arg5;
+ (id)createFormulaReferenceRangeForRowBlocks:(id)arg1;
+ (void)readRowsFrom:(struct _xmlTextReader *)arg1 state:(id)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBWorkbook : NSObject

+ (id)readWithState:(id)arg1 reader:(id)arg2;
+ (void)readDocumentProperties:(id)arg1 state:(id)arg2;
+ (void)readDocumentPresentation:(id)arg1 state:(id)arg2;
+ (ChVector_cc6fdd32 *)createSheetNamesFromWorkbook:(id)arg1;
+ (int)xlSheetTypeEnumFromEDSheet:(id)arg1;
+ (void)setupProcessors:(id)arg1;

@end

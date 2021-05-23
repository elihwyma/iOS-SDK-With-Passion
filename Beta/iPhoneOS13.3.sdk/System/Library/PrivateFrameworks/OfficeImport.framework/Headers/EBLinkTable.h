/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBLinkTable : NSObject

+ (int)mapXlLinkTypeToED:(int)arg1;
+ (int)mapEDLinkTypeToXl:(int)arg1;
+ (void)readFromState:(id)arg1;
+ (struct XlLinkTable *)createXlLinkTableFromLinksCollection:(id)arg1 workbook:(id)arg2 state:(id)arg3;

@end

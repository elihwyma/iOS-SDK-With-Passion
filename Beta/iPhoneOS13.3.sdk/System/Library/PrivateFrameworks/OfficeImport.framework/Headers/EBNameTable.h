/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBNameTable : NSObject

+ (void)readFromState:(id)arg1;
+ (id)edNameFromXlName:(struct XlName *)arg1 name:(struct OcText)arg2 state:(id)arg3;
+ (struct XlName *)xlNameFromEDName:(id)arg1 state:(id)arg2;
+ (struct XlNameTable *)createXlNameTableFromNamesCollection:(id)arg1 state:(id)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBSheet : NSObject

+ (Class)edSheetClassFromXlSheetTypeEnum:(int)arg1;
+ (Class)ebSheetClassFromEDSheet:(id)arg1;
+ (void)readDelayedSheetWithIndex:(unsigned int)arg1 state:(id)arg2;
+ (void)readSheetWithIndex:(unsigned int)arg1 state:(id)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBTableRow : NSObject

+ (void)readFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3 index:(unsigned long long)arg4 row:(id)arg5;
+ (void)readCellsFrom:(id)arg1 textRuns:(id)arg2 level:(int)arg3 to:(id)arg4 properties:(struct WrdTableProperties *)arg5 tracked:(struct WrdTableProperties *)arg6;
+ (void)collectCellProperties:(struct WrdTableProperties *)arg1 tracked:(struct WrdTableProperties *)arg2 for:(id)arg3;

@end

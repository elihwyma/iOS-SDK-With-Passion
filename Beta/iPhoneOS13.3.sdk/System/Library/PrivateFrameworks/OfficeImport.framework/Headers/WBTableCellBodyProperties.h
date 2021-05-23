/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBTableCellBodyProperties : NSObject

+ (void)readFrom:(struct WrdTableProperties *)arg1 tracked:(struct WrdTableProperties *)arg2 properties:(id)arg3 index:(unsigned long long)arg4;
+ (void)mapWordProperties:(struct WrdTableProperties *)arg1 toProperties:(id)arg2 index:(unsigned long long)arg3;
+ (void)mapProperties:(id)arg1 toWordProperties:(struct WrdTableProperties *)arg2 index:(unsigned long long)arg3;
+ (id)formattingChangeDate:(const struct WrdDateTime *)arg1;
+ (void)write:(id)arg1 wrdProperties:(struct WrdTableProperties *)arg2 tracked:(struct WrdTableProperties *)arg3 index:(unsigned long long)arg4;

@end

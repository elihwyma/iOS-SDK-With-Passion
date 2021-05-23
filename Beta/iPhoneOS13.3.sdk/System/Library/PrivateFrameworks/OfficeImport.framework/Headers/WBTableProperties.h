/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBTableProperties : NSObject

+ (void)readFrom:(id)arg1 wrdProperties:(struct WrdTableProperties *)arg2 tracked:(struct WrdTableProperties *)arg3 properties:(id)arg4;
+ (void)mapWordProperties:(struct WrdTableProperties *)arg1 reader:(id)arg2 toProperties:(id)arg3;
+ (id)formattingChangeDate:(const struct WrdDateTime *)arg1;

@end

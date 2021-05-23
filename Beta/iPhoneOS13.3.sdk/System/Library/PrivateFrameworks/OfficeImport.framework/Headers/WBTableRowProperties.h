/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBTableRowProperties : NSObject

+ (void)readFrom:(id)arg1 wrdProperties:(struct WrdTableProperties *)arg2 tracked:(struct WrdTableProperties *)arg3 properties:(id)arg4;
+ (void)mapWordProperties:(struct WrdTableProperties *)arg1 toProperties:(id)arg2;
+ (void)write:(id)arg1 properties:(id)arg2 wrdProperties:(struct WrdTableProperties *)arg3 tracked:(struct WrdTableProperties *)arg4;
+ (void)mapProperties:(id)arg1 toWordProperties:(struct WrdTableProperties *)arg2;

@end

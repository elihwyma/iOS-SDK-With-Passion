/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBTableStyleOverride : NSObject

+ (void)readFrom:(id)arg1 wrdStyle:(struct WrdStyle *)arg2 style:(id)arg3 part:(int)arg4 tableStyleOverride:(id)arg5;
+ (void)prepareForWriting:(id)arg1 tableStyleOverride:(id)arg2 wrdProperties:(struct WrdCharacterProperties *)arg3 tracked:(struct WrdCharacterProperties *)arg4;

@end

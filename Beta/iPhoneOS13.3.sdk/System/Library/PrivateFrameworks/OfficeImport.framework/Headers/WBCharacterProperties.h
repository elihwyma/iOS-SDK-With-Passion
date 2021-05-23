/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBCharacterProperties : NSObject

+ (void)readFrom:(id)arg1 wrdProperties:(struct WrdCharacterProperties *)arg2 document:(id)arg3 properties:(id)arg4;
+ (void)prepareForWriting:(id)arg1 properties:(id)arg2 wrdProperties:(struct WrdCharacterProperties *)arg3 tracked:(struct WrdCharacterProperties *)arg4;
+ (struct WrdCharacterProperties *)createTrackedPropertiesIfNeeded:(id)arg1;
+ (void)readFrom:(id)arg1 wrdProperties:(struct WrdCharacterProperties *)arg2 tracked:(struct WrdCharacterProperties *)arg3 document:(id)arg4 properties:(id)arg5;
+ (id)formattingChangeDate:(const struct WrdDateTime *)arg1;

@end

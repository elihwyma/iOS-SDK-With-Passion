/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WXCharacterRun : NSObject

+ (void)readFrom:(struct _xmlNode *)arg1 to:(id)arg2;
+ (id)fontForRun:(id)arg1 fontType:(int)arg2;
+ (_Bool)isSpecialCharacter:(unsigned short)arg1;
+ (void)readFromString:(id)arg1 source:(struct _xmlNode *)arg2 to:(id)arg3;

@end

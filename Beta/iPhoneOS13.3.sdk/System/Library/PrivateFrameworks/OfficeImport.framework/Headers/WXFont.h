/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WXFont : NSObject

+ (id)fontFamilyEnumMap;
+ (id)characterSetEnumMap;
+ (id)isoCharacterSetEnumMap;
+ (id)fontPitchEnumMap;
+ (void)readFrom:(struct _xmlNode *)arg1 to:(id)arg2 state:(id)arg3;

@end

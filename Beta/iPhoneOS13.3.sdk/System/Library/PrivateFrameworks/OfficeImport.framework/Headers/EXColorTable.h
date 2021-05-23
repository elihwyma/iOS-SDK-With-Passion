/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXColorTable : NSObject

+ (void)readFrom:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readColorsFrom:(struct _xmlNode *)arg1 toEDColors:(id)arg2 state:(id)arg3;
+ (void)readOADThemeFrom:(id)arg1 toEDThemeColors:(id)arg2;

@end

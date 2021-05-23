/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBListLevel : NSObject

+ (void)readFrom:(id)arg1 listLevel:(id)arg2 format:(struct WrdListLevelFormat *)arg3 document:(id)arg4;
+ (void)write:(id)arg1 listLevel:(id)arg2 format:(struct WrdListLevelFormat *)arg3;
+ (int)numberFormatEnumFor:(int)arg1;

@end

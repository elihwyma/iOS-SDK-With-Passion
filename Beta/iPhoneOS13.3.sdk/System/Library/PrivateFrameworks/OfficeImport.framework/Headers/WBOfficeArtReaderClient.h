/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBOfficeArtReaderClient : NSObject

+ (int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1 state:(id)arg2;
+ (_Bool)tablesAreAllowed;
+ (id)readDrawableFromPackagePart:(id)arg1 foundInObject:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3;
+ (_Bool)xmlEquivalentOfDrawableCanBeUsed;
+ (void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3;
+ (_Bool)escherIsFullySupported;
+ (void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 includeText:(_Bool)arg3 state:(id)arg4;
+ (void)readClientDataFromObject:(id)arg1 toDrawable:(id)arg2 state:(id)arg3;
+ (_Bool)allowOverlap:(struct EshContentProperties *)arg1;
+ (_Bool)behindText:(struct EshContentProperties *)arg1;
+ (void)readFrom:(struct EshContentProperties *)arg1 to:(id)arg2;
+ (int)horizontalPosition:(struct EshContentProperties *)arg1;
+ (int)relativeHorizontalPosition:(struct EshContentProperties *)arg1;
+ (int)verticalPosition:(struct EshContentProperties *)arg1;
+ (int)relativeVerticalPosition:(struct EshContentProperties *)arg1;
+ (double)wrapDistanceLeft:(struct EshContentProperties *)arg1;
+ (double)wrapDistanceTop:(struct EshContentProperties *)arg1;
+ (double)wrapDistanceRight:(struct EshContentProperties *)arg1;
+ (double)wrapDistanceBottom:(struct EshContentProperties *)arg1;

@end

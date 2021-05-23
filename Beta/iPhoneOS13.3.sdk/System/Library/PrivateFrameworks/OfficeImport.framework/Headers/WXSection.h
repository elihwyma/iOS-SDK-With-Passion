/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WXSection : NSObject

+ (id)pageOrientationEnumMap;
+ (float)scaleFromPrinterSettings:(id)arg1;
+ (void)readFrom:(struct _xmlNode *)arg1 to:(id)arg2 state:(id)arg3;
+ (id)pageBorderDisplayEnumMap;
+ (void)mapHeader:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;
+ (void)mapFooter:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;
+ (void)mapPrinterSettings:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;
+ (void)mapProperties:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;
+ (id)sectionBreakEnumMap;
+ (id)pageBorderDepthEnumMap;
+ (id)pageBorderOffsetEnumMap;
+ (id)lineNumberRestartEnumMap;
+ (id)verticalJustificationEnumMap;
+ (id)chapterNumberSeparatorEnumMap;

@end

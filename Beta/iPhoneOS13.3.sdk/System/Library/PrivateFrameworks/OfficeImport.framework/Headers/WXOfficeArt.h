/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WXOfficeArt : NSObject

+ (void)readOAX:(struct _xmlNode *)arg1 parentRElement:(struct _xmlNode *)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5;
+ (void)readVml:(struct _xmlNode *)arg1 parentRElement:(struct _xmlNode *)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5;
+ (id)relativeHorizontalPositionEnumMap;
+ (id)relativeVerticalPositionEnumMap;
+ (id)textWrappingModeTypeEnumMap;
+ (void)readFrom:(struct _xmlNode *)arg1 parentRElement:(struct _xmlNode *)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5;
+ (void)readClientData:(struct _xmlNode *)arg1 state:(id)arg2 to:(id)arg3;
+ (void)readPosition:(struct _xmlNode *)arg1 state:(id)arg2 to:(id)arg3 isHorizontal:(_Bool)arg4;
+ (void)readWrap:(struct _xmlNode *)arg1 state:(id)arg2 to:(id)arg3;
+ (void)readWrapDistance:(struct _xmlNode *)arg1 parentElement:(struct _xmlNode *)arg2 state:(id)arg3 to:(id)arg4;
+ (void)writeWrapText:(id)arg1 to:(id)arg2;
+ (void)writeWrapLeftDistance:(id)arg1 to:(id)arg2;
+ (void)writeWrapRightDistance:(id)arg1 to:(id)arg2;
+ (void)writeWrapPolygonChildren:(id)arg1 to:(id)arg2;
+ (void)writeWrapTopDistance:(id)arg1 to:(id)arg2;
+ (void)writeWrapBottomDistance:(id)arg1 to:(id)arg2;
+ (_Bool)writeWrapTightlyWith:(id)arg1 toWriter:(id)arg2;

@end

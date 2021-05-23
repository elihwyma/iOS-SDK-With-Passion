/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXAlignmentInfo : NSObject

+ (int)edHorizontalAlignFromHorizontalAlignString:(id)arg1;
+ (int)edVerticalAlignFromVerticalAlignString:(id)arg1;
+ (id)horizontalAlignmentEnumMap;
+ (id)verticalAlignmentEnumMap;
+ (id)edAlignmentInfoFromXmlAlignmentInfoElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)edAlignmentInfoFromVmlAlignmentInfoElement:(struct _xmlNode *)arg1 state:(id)arg2;

@end

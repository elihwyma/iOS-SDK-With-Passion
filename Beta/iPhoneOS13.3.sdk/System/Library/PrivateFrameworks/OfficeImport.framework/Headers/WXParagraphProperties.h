/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WXParagraphProperties : NSObject

+ (void)readFrom:(struct _xmlNode *)arg1 to:(id)arg2 readBaseStyle:(_Bool)arg3 state:(id)arg4;
+ (id)heightRuleEnumMap;
+ (id)horizontalAnchorEnumMap;
+ (id)verticalAnchorEnumMap;
+ (id)wrapCodeEnumMap;
+ (id)lineSpacingEnumMap;
+ (id)dropCapEnumMap;
+ (id)tabTypeEnumMap;
+ (id)strictTabTypeEnumMap;
+ (id)tabLeaderEnumMap;

@end

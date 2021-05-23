/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WXCharacterProperties : NSObject

+ (id)underlineEnumMap;
+ (_Bool)readBooleanCharacterProperty:(struct _xmlNode *)arg1 propertyName:(const char *)arg2 attributeName:(const char *)arg3 outValue:(int *)arg4 state:(id)arg5;
+ (void)readReflection:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2 state:(id)arg3;
+ (void)readShadowForTarget:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2 state:(id)arg3;
+ (id)ligaturesEnumMap;
+ (id)highlightEnumMap;
+ (id)verticalAlignEnumMap;
+ (id)emphasisMarkEnumMap;
+ (id)fontHintEnumMap;
+ (_Bool)readBooleanCharacterMultipleProperty:(struct _xmlNode *)arg1 propertyName:(const char *)arg2 attributeName:(const char *)arg3 outValue:(int *)arg4 state:(id)arg5;
+ (id)twoLineBracketsEnumMap;
+ (id)readFillColor:(struct _xmlNode *)arg1 forTarget:(id)arg2 state:(id)arg3;
+ (_Bool)isBooleanCharacterPropertyTrue:(int)arg1;
+ (void)readFrom:(struct _xmlNode *)arg1 to:(id)arg2 state:(id)arg3;
+ (void)applyDeletionInsertionProperties:(id)arg1 state:(id)arg2;

@end

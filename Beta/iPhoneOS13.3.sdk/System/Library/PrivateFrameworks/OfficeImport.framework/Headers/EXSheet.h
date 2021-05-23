/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXSheet : NSObject

+ (void)readFrom:(struct _xmlNode *)arg1 state:(id)arg2;
+ (Class)exSheetClassFromXmlSheetType:(id)arg1 location:(id)arg2;
+ (void)readCommonSheetElementsFrom:(struct _xmlTextReader *)arg1 state:(id)arg2;
+ (void)readAllDrawablesWithState:(id)arg1;
+ (void)readSheetProperties:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readLegacyDrawablesWithState:(id)arg1;
+ (void)readDrawablesWithState:(id)arg1;
+ (void)readDelayedSheeWithLocation:(id)arg1 sheetXmlType:(id)arg2 state:(id)arg3;

@end

/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXPivotTable : NSObject

+ (void)readLocationFrom:(struct _xmlNode *)arg1 toPivotTable:(id)arg2;
+ (void)readStyleInfoFrom:(struct _xmlNode *)arg1 toPivotTable:(id)arg2;
+ (void)readPivotFieldsFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2 state:(id)arg3;
+ (void)readFieldsFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2 state:(id)arg3;
+ (void)readItemsFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2 state:(id)arg3;
+ (void)readPageFieldsFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2 state:(id)arg3;
+ (void)readDataFieldsFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2 state:(id)arg3;
+ (void)readConditionalFormatsFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2 state:(id)arg3;
+ (void)readPivotAreasFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2 state:(id)arg3;
+ (id)edPivotTableFromXmlPivotTableElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (int)edPivotItemTypeFrom:(id)arg1;
+ (int)edPivotFieldAxisFrom:(id)arg1;
+ (void)readFieldItemsFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2 state:(id)arg3;
+ (int)edPivotDatFieldFormatFrom:(id)arg1;
+ (int)edPivotConditionalFormatTypeFrom:(id)arg1;
+ (int)edPivotConditionalFormatScopeFrom:(id)arg1;
+ (int)edPivotAreaTypeFrom:(id)arg1;
+ (void)readPivotAreaReferencesFrom:(struct _xmlNode *)arg1 toCollection:(id)arg2 state:(id)arg3;

@end

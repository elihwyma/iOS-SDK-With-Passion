/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@interface CUIThemeSchema : NSObject

+ (id)defaultSchema;
+ (id)schemaForPlatform:(long long)arg1;

- (long long)schemaVersion;
- (const CDStruct_c77fb927 *)elementCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementCategoryCount;
- (const CDStruct_e3362728 *)elementDefinitionAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementDefinitionCount;
- (const CDStruct_e3362728 *)sortedElementDefinitionAtIndex:(unsigned long long)arg1;
- (unsigned long long)partDefinitionCountForElementDefinition:(const CDStruct_e3362728 *)arg1;
- (unsigned long long)dimensionDefinitionCountForPartDefinition:(const CDStruct_26b2aa83 *)arg1;
- (const CDStruct_e3362728 *)elementDefinitionWithName:(id)arg1;
- (const CDStruct_26b2aa83 *)partDefinitionWithName:(id)arg1 forElementDefinition:(const CDStruct_e3362728 *)arg2;
- (id)widgetNameForPartDefinition:(const CDStruct_26b2aa83 *)arg1;
- (const CDStruct_26b2aa83 *)partDefinitionForWidgetName:(id)arg1;
- (id)schemaRenditionsForPartDefinition:(const CDStruct_26b2aa83 *)arg1;
- (void)enumerateAvailableThemeAttributesInPartDefinition:(const CDStruct_26b2aa83 *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAvailableValuesForThemeAttribute:(int)arg1 inPartDefinition:(const CDStruct_26b2aa83 *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (const CDStruct_c77fb927 *)categoryForElementDefinition:(const CDStruct_e3362728 *)arg1;
- (const CDStruct_e3362728 *)effectDefinitionAtIndex:(unsigned long long)arg1;
- (const CDStruct_e3362728 *)sortedEffectDefinitionAtIndex:(unsigned long long)arg1;
- (const CDStruct_e3362728 *)effectDefinitionWithName:(id)arg1;
- (unsigned long long)effectDefinitionCount;
- (unsigned long long)partDefinitionCountForEffectDefinition:(const CDStruct_e3362728 *)arg1;
- (id)schemaEffectRenditionsForPartDefinition:(const CDStruct_26b2aa83 *)arg1;
- (const CDStruct_e3362728 *)materialDefinitionAtIndex:(unsigned long long)arg1;
- (const CDStruct_e3362728 *)sortedMaterialDefinitionAtIndex:(unsigned long long)arg1;
- (const CDStruct_e3362728 *)materialDefinitionWithName:(id)arg1;
- (unsigned long long)materialDefinitionCount;
- (unsigned long long)partDefinitionCountForMaterialDefinition:(const CDStruct_e3362728 *)arg1;
- (id)schemaMaterialRenditionsForPartDefinition:(const CDStruct_26b2aa83 *)arg1;

@end

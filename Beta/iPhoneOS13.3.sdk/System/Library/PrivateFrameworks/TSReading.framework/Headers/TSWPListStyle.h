/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSSStyle.h>

@class NSString;

@interface TSWPListStyle : TSSStyle

@property (nonatomic, readonly) NSString *presetKind;

+ (id)properties;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultPropertyMap;
+ (id)propertiesAllowingNSNull;
+ (id)presetStyleDescriptor;
+ (id)defaultMissingBulletImage;
+ (_Bool)isDefaultMissingBulletImage:(id)arg1;
+ (int)pLabelTypeForLevel:(unsigned long long)arg1 forPropertyMapping:(id)arg2 includeDegenerateLevels:(_Bool)arg3;
+ (int)firstLabelTypeForPropertyMapping:(id)arg1;
+ (void)pGetDefaultTextIndentFloats:(double [9])arg1;
+ (id)defaultLabelIndents;
+ (id)pLabelTypeArrayForType:(int)arg1;
+ (id)pDefaultLabelValuesForLabelTypeProperty:(int)arg1;
+ (id)defaultLabelGeometries;
+ (id)defaultLabelString;
+ (int)defaultLabelNumberType;
+ (_Bool)defaultTieredNumber;
+ (id)stickyOverrideProperties;
+ (int)effectiveTypeForLevel:(unsigned long long)arg1 forPropertyMapping:(id)arg2;
+ (int)labelTypeForLevel:(unsigned long long)arg1 forPropertyMapping:(id)arg2;
+ (id)defaultTextIndents;
+ (id)defaultStyleWithContext:(id)arg1 type:(int)arg2;
+ (id)harvardStyleWithContext:(id)arg1;
+ (id)numberedlistStyleForPresets:(id)arg1;
+ (id)listStyleWithNumberType:(int)arg1 inStyleSheet:(id)arg2 withNumberedPresetStyle:(id)arg3;
+ (id)propertyMapForListNumberType:(int)arg1;
+ (id)CJKListNameForNumberType:(int)arg1;

- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(_Bool)arg4;
- (id)baseStyleForTopicNumbers;
- (int)labelTypeForLevel:(unsigned long long)arg1;
- (int)effectiveTypeForLevel:(unsigned long long)arg1;
- (int)firstLabelType;
- (double)labelIndentForLevel:(unsigned long long)arg1;
- (double)textIndentForLevel:(unsigned long long)arg1 fontSize:(double)arg2;
- (id)pOverrideArrayWithValue:(id)arg1 forProperty:(int)arg2 atParagraphLevels:(id)arg3 withContext:(id)arg4;
- (id)overridePropertyMapWithValue:(id)arg1 forProperty:(int)arg2 atParagraphLevels:(id)arg3 withContext:(id)arg4;

@end

/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PBSlideBase.h>

__attribute__((visibility("hidden")))
@interface PBSlideMaster : PBSlideBase

+ (void)setSlideMasterTextStyles:(id)arg1 state:(id)arg2;
+ (void)setFont:(id)arg1 fromCharacterProperties:(id)arg2;
+ (void)readSlideMasterTextStyles:(id)arg1 slideHolder:(id)arg2 state:(id)arg3;
+ (void)readMasterDrawables:(id)arg1 slideHolder:(id)arg2 state:(id)arg3;
+ (void)readSlideMasterName:(id)arg1 slideHolder:(id)arg2 state:(id)arg3;
+ (void)flattenPlaceholderTextStylesIntoLayout:(id)arg1 layoutType:(int)arg2 masterStyleMap:(id)arg3;
+ (id)createMasterStyleMap:(id)arg1 state:(id)arg2;
+ (void)padMissingLevels:(id)arg1;
+ (id)textBodyForPlaceholderType:(int)arg1 slideLayout:(id)arg2;
+ (int)textTypeFor:(int)arg1 placeholderType:(int)arg2;
+ (void)flattenTextStyle:(id)arg1 intoTextBox:(id)arg2;
+ (void)flattenBaseMasterStyleType:(int)arg1 masterStyleMap:(id)arg2;
+ (void)flattenMasterStyleType:(int)arg1 baseType:(int)arg2 masterStyleMap:(id)arg3;
+ (void)setCannedOtherTextListStyle:(id)arg1;
+ (void)readSlideMasterColorScheme:(id)arg1 slideHolder:(id)arg2 state:(id)arg3;

@end

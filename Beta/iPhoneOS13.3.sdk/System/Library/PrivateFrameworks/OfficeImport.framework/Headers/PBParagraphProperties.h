/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PBParagraphProperties : NSObject

+ (void)readAlign:(id)arg1 pptAlignmentType:(int)arg2;
+ (short)pptTextSpacingWithOADParaSpacing:(id)arg1 defaultPptParaSpacing:(short)arg2;
+ (int)pptAlignmentTypeWithOADTextAlignType:(unsigned char)arg1;
+ (int)pptFontAlignWithOADTextFontAlign:(unsigned char)arg1;
+ (void)readParagraphProperties:(id)arg1 paragraphProperty:(struct PptParaProperty *)arg2 bulletStyle:(struct PptParaProperty9 *)arg3 isMaster:(_Bool)arg4 state:(id)arg5;
+ (void)readParagraphProperties:(id)arg1 paragraphPropertyRun:(struct PptParaRun *)arg2 bulletStyle:(struct PptParaProperty9 *)arg3 state:(id)arg4;

@end

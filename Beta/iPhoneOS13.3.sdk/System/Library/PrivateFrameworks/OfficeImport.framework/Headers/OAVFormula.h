/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAVFormula : NSObject

+ (id)readFormula:(struct _xmlNode *)arg1;
+ (struct OADFormulaArg)readArgument:(id)arg1;
+ (void)readFormulasFromManager:(id)arg1 toGeometry:(id)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface _ATXRecipeEvaluation : NSObject

+ (double)kendallTauFirstItems:(CDStruct_d8fa4ea4 *)arg1 secondItems:(CDStruct_d8fa4ea4 *)arg2 count:(unsigned long long)arg3;
+ (unsigned long long)rankOfScore:(double)arg1 inputItems:(CDStruct_d8fa4ea4 *)arg2 count:(unsigned long long)arg3;
+ (id)inputScoresFromItem:(CDStruct_d8fa4ea4 *)arg1;
+ (id)evaluateRecipe:(id)arg1 recordData:(id)arg2;
+ (id)evaluateRecipe:(id)arg1 recordInfo:(id)arg2 recordData:(id)arg3 attachments:(id)arg4 errorDomain:(id)arg5 error:(id *)arg6;

@end

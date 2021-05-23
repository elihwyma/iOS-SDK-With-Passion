/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface _ATXScoreInterpreter : NSObject

{
    NSDictionary *_varPrograms;
}

- (id)initWithParseRoot:(id)arg1;
- (void)_compileRoot:(id)arg1;
- (double)_evalVariable:(id)arg1 withCtx:(id)arg2;
- (id)evaluateWithInputScores:(id)arg1 intentType:(id)arg2;
- (id)evaluateWithInputScoreDict:(id)arg1 intentType:(id)arg2;

@end

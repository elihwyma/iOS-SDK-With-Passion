/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <SiriUICore/_SUICEditScript.h>

@class NSString, _SUICAtomRanged;

@interface _SUICEditScriptRanged : _SUICEditScript

{
    long long _options;
    _SUICAtomRanged *_currentScriptAtom;
}

@property (weak, nonatomic, readonly) NSString *stringA;
@property (weak, nonatomic, readonly) NSString *stringB;

+ (id)editScriptFromString:(id)arg1 toString:(id)arg2 chunkSize:(long long)arg3 orderAtomsAscending:(_Bool)arg4 operationPrecedence:(long long)arg5 options:(long long)arg6;
+ (id)editScriptFromString:(id)arg1 toString:(id)arg2;
+ (id)editScriptForSmallestSingleEditFromString:(id)arg1 toString:(id)arg2;
+ (id)editScriptForSmallestSingleEditFromString:(id)arg1 toString:(id)arg2 chunkSize:(long long)arg3;

- (void)initializeCurrentScriptAtom;
- (void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;
- (void)finalizeCurrentScriptAtom;
- (id)initWithOperationPrecedence:(long long)arg1 dataClass:(Class)arg2 chunkSize:(long long)arg3 stringA:(id)arg4 stringB:(id)arg5 orderAtomsAscending:(_Bool)arg6 options:(long long)arg7;
- (void)removeAnyOverlapBetweenIndexOfFirstDifference:(long long *)arg1 andReverseIndexOfLastDifference:(long long *)arg2 shouldShortenFirstDifference:(_Bool)arg3;
- (void)computeSmallestSingleEdit;
- (id)applyToString:(id)arg1;

@end

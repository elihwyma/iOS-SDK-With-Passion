/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, _CDPModelTuningState, _CDPSimpleModel;

@interface _CDPModelTuning : NSObject

{
    _CDPModelTuningState *_currentState;
    int _numberOfGridTests;
    CDUnknownBlockType _scorer;
    CDUnknownBlockType _heartBeat;
    _CDPSimpleModel *_model;
    NSIndexSet *_testIndices;
}

@property (copy, nonatomic) CDUnknownBlockType scorer;
@property (copy, nonatomic) CDUnknownBlockType heartBeat;
@property (retain, nonatomic) _CDPSimpleModel *model;
@property (retain, nonatomic) NSIndexSet *testIndices;
@property (nonatomic, readonly) int numberOfGridTests;
@property (nonatomic, readonly) _CDPModelTuningState *currentState;

+ (CDUnknownBlockType)fScoreWithBeta:(float)arg1;
+ (void)_enumerateSubsetsOfSet:(unsigned int *)arg1 setLength:(unsigned long long)arg2 index:(unsigned long long)arg3 subset:(unsigned int *)arg4 subsetLength:(unsigned long long)arg5 index:(unsigned long long)arg6 callback:(CDUnknownBlockType)arg7;
+ (unsigned int *)_newSetDifference:(unsigned int *)arg1 setLength:(unsigned long long)arg2 subset:(unsigned int *)arg3 subsetLength:(unsigned long long)arg4;
+ (void)_cumulativeSumOfArray:(float *)arg1 size:(unsigned long long)arg2 reverse:(_Bool)arg3;
+ (void)_addArray:(float *)arg1 size:(unsigned long long)arg2 inArray:(float *)arg3;
+ (void)_enumerateSubsetsOfSet:(unsigned int *)arg1 setLength:(unsigned long long)arg2 withSize:(unsigned long long)arg3 callback:(CDUnknownBlockType)arg4;
+ (CDUnknownBlockType)f1Score;
+ (CDUnknownBlockType)f2Score;

- (float)_testModelWithThreshold:(float *)arg1;
- (void)resumeTuningWithState:(id)arg1;

@end

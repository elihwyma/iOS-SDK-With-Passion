/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSString, _CDPModelTuningState, _CDPSimpleModelParameterManagerAccountState;

@interface _CDPSimpleModelParameterManager : NSObject

{
    _CDPSimpleModelParameterManagerAccountState *_accountState;
    NSString *_accountStateKey;
}

@property (nonatomic, readonly) _CDPModelTuningState *lastTuningState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithSettings:(id)arg1;
- (void)loadAccountState;
- (void)saveAccountState;
- (void)modelTuner:(id)arg1 heartBeatWithlambda:(float)arg2 w0:(float)arg3 threshold:(float)arg4 score:(float)arg5 progress:(float)arg6;
- (void)modelTunerWillResume:(id)arg1;
- (void)modelTunerWillStop:(id)arg1;
- (id)accountIdentifierForSettings:(id)arg1;
- (void)getLambda:(float *)arg1 w0:(float *)arg2 threshold:(float *)arg3;

@end

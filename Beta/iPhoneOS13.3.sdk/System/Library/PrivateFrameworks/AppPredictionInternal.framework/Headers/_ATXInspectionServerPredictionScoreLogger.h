/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface _ATXInspectionServerPredictionScoreLogger : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_inputsAndSubscores;
    NSDictionary *_stageScores;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setAssetVersion:(unsigned long long)arg1;
- (void)setConsumerSubType:(unsigned char)arg1;
- (id)stageScores;
- (void)logInputs:(id)arg1 subscores:(id)arg2 forBundleId:(id)arg3;
- (void)logInputDict:(id)arg1 subscores:(id)arg2 forBundleId:(id)arg3;
- (void)setPredictionClass:(id)arg1;
- (void)setCacheAge:(double)arg1;
- (void)logStageScores:(id)arg1 secondStageScores:(id)arg2 thirdStageScores:(id)arg3;
- (id)inputsAndSubscores;

@end

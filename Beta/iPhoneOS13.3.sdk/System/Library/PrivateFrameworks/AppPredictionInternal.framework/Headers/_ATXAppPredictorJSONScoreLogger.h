/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface _ATXAppPredictorJSONScoreLogger : NSObject

{
    NSMutableDictionary *_history;
    unsigned char _consumerSubType;
    NSMutableArray *_subscoreHistories;
    NSObject<OS_dispatch_queue> *_fastQueue;
    NSObject<OS_dispatch_queue> *_slowQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)flush;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (void)setAssetVersion:(unsigned long long)arg1;
- (void)setConsumerSubType:(unsigned char)arg1;
- (void)logInputs:(id)arg1 subscores:(id)arg2 forBundleId:(id)arg3;
- (void)logInputDict:(id)arg1 subscores:(id)arg2 forBundleId:(id)arg3;
- (void)setPredictionClass:(id)arg1;
- (void)setCacheAge:(double)arg1;
- (void)logStageScores:(id)arg1 secondStageScores:(id)arg2 thirdStageScores:(id)arg3;
- (void)flushWithFilenameSuffix:(id)arg1;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1 filenameSuffix:(id)arg2;

@end

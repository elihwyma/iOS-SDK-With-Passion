/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <NanoMusicSync/NMLogAction.h>

@class NMSQuotaEvaluationState;

__attribute__((visibility("hidden")))
@interface NMSQuotaEvaluationLogAction : NMLogAction

{
    unsigned long long _type;
    NMSQuotaEvaluationState *_state;
}

+ (id)logActionWithActionType:(unsigned long long)arg1 state:(id)arg2;

- (id)_stringForType:(unsigned long long)arg1;
- (id)logMessage;
- (id)initWithActionType:(unsigned long long)arg1 state:(id)arg2;

@end

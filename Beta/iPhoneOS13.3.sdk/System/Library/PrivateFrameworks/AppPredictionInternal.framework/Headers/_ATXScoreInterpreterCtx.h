/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXScoreDict, NSString;

@interface _ATXScoreInterpreterCtx : NSObject

{
    unsigned long long stackLen;
    double stack[500];
    ATXScoreDict *inputScores;
    ATXScoreDict *subscores;
    NSString *intentType;
}

- (id)initWithInputScores:(id)arg1 intentType:(id)arg2;

@end

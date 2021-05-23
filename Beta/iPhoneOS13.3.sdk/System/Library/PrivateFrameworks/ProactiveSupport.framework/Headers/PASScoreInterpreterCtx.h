/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSString, PASScoreDict;

@interface PASScoreInterpreterCtx : NSObject

{
    unsigned long long stackLen;
    double stack[500];
    PASScoreDict *inputScores;
    PASScoreDict *subscores;
    NSString *intentType;
}

- (id)initWithInputScores:(id)arg1;

@end

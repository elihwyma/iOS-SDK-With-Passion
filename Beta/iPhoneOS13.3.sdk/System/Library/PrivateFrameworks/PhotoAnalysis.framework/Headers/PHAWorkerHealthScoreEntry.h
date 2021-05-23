/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface PHAWorkerHealthScoreEntry : NSObject

{
    float _score;
    NSDate *_dateRecorded;
}

@property (nonatomic, readonly) float score;
@property (copy, nonatomic, readonly) NSDate *dateRecorded;

- (id)initWithScore:(float)arg1;

@end

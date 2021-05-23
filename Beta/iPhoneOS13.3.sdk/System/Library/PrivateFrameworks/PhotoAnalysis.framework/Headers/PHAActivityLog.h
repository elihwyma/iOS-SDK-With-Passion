/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface PHAActivityLog : NSObject

{
    double _absoluteStartTime;
    double _absoluteEndTime;
    unsigned long long _status;
    unsigned long long _graphRequestInterruptionCount;
    NSDate *_startDate;
    double _duration;
}

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) unsigned long long status;

- (id)init;
- (id)description;
- (void)markProcessingStopped:(unsigned long long)arg1;
- (void)markProcessingInterruptedByGraphRequest;

@end

/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SFActivityBitmaps : NSObject

{
    char _bitmapsBuffer[64];
    NSString *_appName;
    unsigned long long _startTime;
    unsigned long long _wordOffset;
    unsigned long long _numOfWords;
}

@property (retain, nonatomic) NSString *appName;
@property unsigned long long startTime;
@property unsigned long long wordOffset;
@property unsigned long long numOfWords;

+ (_Bool)adjustStartTime:(unsigned long long *)arg1 endTime:(unsigned long long *)arg2 currMachAbsTime:(unsigned long long *)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)clearAndSetNewActivityWithStartTime:(unsigned long long)arg1 part1:(unsigned long long)arg2 part:(unsigned long long)arg3;
- (unsigned long long)adjustStartTime:(unsigned long long)arg1;
- (void)writeWord:(unsigned long long)arg1 atOffset:(unsigned long long)arg2;
- (void)freeUpBufferSpace;
- (void)resetStartTimeToEarlierTime:(unsigned long long)arg1;
- (void)setActivityWithStartTime:(unsigned long long)arg1 part1:(unsigned long long)arg2 part2:(unsigned long long)arg3;
- (void)setAlignedBitmap:(unsigned long long)arg1 withStartTime:(unsigned long long)arg2;
- (unsigned long long)getWordAtOffset:(unsigned long long)arg1;
- (unsigned long long)getHammingWeight;
- (id)getWrappedBitmapsFromTime:(unsigned long long)arg1 toTime:(unsigned long long)arg2;
- (id)getWrappedBitmaps;
- (unsigned long long)getAlignedBitmapStartingAtTime:(unsigned long long)arg1;
- (void)addActivityWithFlowId:(unsigned long long)arg1 startTime:(unsigned long long)arg2 part1:(unsigned long long)arg3 part2:(unsigned long long)arg4;
- (void)resetAllActivities;
- (unsigned long long)getLongestContiguousHammingWeight;
- (unsigned long long)getEndTime;

@end

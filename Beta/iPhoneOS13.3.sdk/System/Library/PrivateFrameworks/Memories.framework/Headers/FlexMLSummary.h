/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface FlexMLSummary : NSObject

{
    float _peakValue;
    NSDictionary *_videoCues;
    NSArray *_allBeats;
    NSArray *_allBars;
    NSArray *_loopPoints;
    double _lkfsValue;
    NSArray *_segments;
    CDStruct_1b6d18a9 _duration;
}

@property (retain, nonatomic) NSArray *segments;
@property (retain, nonatomic) NSDictionary *videoCues;
@property (nonatomic) CDStruct_1b6d18a9 duration;
@property (nonatomic) double lkfsValue;
@property (nonatomic) float peakValue;
@property (nonatomic, readonly) NSArray *allBeats;
@property (nonatomic, readonly) NSArray *allBars;
@property (nonatomic, readonly) NSArray *loopPoints;

+ (id)summaryFromSummaries:(id)arg1 targetTimeScale:(int)arg2;

- (id)initWithDictionary:(id)arg1 targetTimeScale:(int)arg2;

@end

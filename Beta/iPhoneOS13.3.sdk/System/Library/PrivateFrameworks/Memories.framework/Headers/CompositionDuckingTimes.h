/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CompositionDuckingTimes : NSObject

{
    NSMutableArray *m_duckingEvents;
    int m_projectDurationInFrames;
}

@property (retain, nonatomic) NSMutableArray *duckingEvents;
@property int projectDurationInFrames;

+ (id)compositionDuckingTimesWithProject:(id)arg1;

- (void)dealloc;
- (id)initWithProject:(id)arg1;
- (_Bool)clipIsAudible:(id)arg1;
- (_Bool)shouldDuckAtTime:(int)arg1;
- (void)addDuckingFromTime:(int)arg1 toTime:(int)arg2;
- (void)makeDuckingDataForEditListWithProject:(id)arg1;
- (void)makeDuckingDataForForegroundAudioClipsWithProject:(id)arg1;
- (void)appendDuckingChangeAtFrameTime:(int)arg1 shouldDuck:(_Bool)arg2;
- (int)nextDuckChangeTimeFromTime:(int)arg1;

@end

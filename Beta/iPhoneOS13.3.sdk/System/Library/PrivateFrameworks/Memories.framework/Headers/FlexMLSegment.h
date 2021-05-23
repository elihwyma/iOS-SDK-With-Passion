/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface FlexMLSegment : NSObject

{
    NSArray *_gainFunction;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _trackTime;
    CDStruct_1b6d18a9 _summaryTime;
}

@property (nonatomic, readonly) CDStruct_1b6d18a9 duration;
@property (nonatomic, readonly) CDStruct_1b6d18a9 trackTime;
@property (nonatomic, readonly) CDStruct_1b6d18a9 summaryTime;
@property (nonatomic, readonly) NSArray *gainFunction;

- (id)initWithDuration:(CDStruct_1b6d18a9)arg1 trackTime:(CDStruct_1b6d18a9)arg2 summaryTime:(CDStruct_1b6d18a9)arg3 gainFunction:(id)arg4;

@end

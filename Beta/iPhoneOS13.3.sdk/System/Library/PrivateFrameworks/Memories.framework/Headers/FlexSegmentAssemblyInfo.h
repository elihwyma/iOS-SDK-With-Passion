/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class FlexSegment, NSURL;

@interface FlexSegmentAssemblyInfo : NSObject

{
    FlexSegment *_segment;
    long long _barsUsed;
    NSURL *_url;
    long long _offset;
    long long _duration;
}

@property (retain, nonatomic) FlexSegment *segment;
@property (nonatomic) long long barsUsed;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) long long offset;
@property (nonatomic) long long duration;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

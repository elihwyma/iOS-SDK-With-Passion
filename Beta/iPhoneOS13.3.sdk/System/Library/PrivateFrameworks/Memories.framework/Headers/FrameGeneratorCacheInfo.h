/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class VideoMovie;

__attribute__((visibility("hidden")))
@interface FrameGeneratorCacheInfo : NSObject

{
    VideoMovie *m_movie;
    CDStruct_1b6d18a9 m_time;
    struct CGSize m_size;
    double m_rotation;
}

@property (retain, nonatomic) VideoMovie *movie;
@property (nonatomic) CDStruct_1b6d18a9 time;
@property (nonatomic) struct CGSize size;
@property (nonatomic) double rotation;

- (void)dealloc;

@end

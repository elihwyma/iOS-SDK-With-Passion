/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSOperation.h>

@class MiroMemory;

__attribute__((visibility("hidden")))
@interface MiroDownloadSongOperation : NSOperation

{
    _Bool _isFinished;
    _Bool _isExecuting;
    MiroMemory *_memory;
}

@property (retain) MiroMemory *memory;

- (void)start;
- (void)finished;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (void)markSongAsUsed;
- (void)downloadSong;

@end

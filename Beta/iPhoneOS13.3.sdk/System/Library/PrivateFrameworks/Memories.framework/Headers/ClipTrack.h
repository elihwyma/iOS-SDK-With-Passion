/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ClipTrack : NSObject

{
    int _clipType;
    int _trackID;
    NSMutableArray *_clips;
}

+ (id)nameForClipType:(int)arg1 trackID:(int)arg2;

- (id)clips;
- (int)clipType;
- (long long)indexOfClip:(id)arg1;
- (void)removeClip:(id)arg1;
- (id)initWithClipType:(int)arg1 trackID:(int)arg2;
- (id)trackName;
- (void)addClip:(id)arg1;
- (void)insertClip:(id)arg1 atIndex:(long long)arg2;

@end

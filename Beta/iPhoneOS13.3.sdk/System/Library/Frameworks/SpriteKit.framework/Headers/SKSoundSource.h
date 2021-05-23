/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKSoundSource : NSObject

{
    unsigned int _sourceId;
    NSMutableArray *_buffers;
}

@property (nonatomic) _Bool shouldLoop;
@property (nonatomic) double gain;
@property (nonatomic) struct CGPoint position;
@property (nonatomic, readonly) _Bool isPlaying;
@property (nonatomic, readonly) int completedBufferCount;
@property (nonatomic, readonly) int queuedBufferCount;

+ (id)source;
+ (id)sourceWithBuffer:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)pause;
- (void)stop;
- (_Bool)play;
- (void)queueBuffer:(id)arg1;
- (void)purgeCompletedBuffers;

@end

/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class AVAudioNode, AVAudioPlayerNode, SCNAudioSource;

@interface SCNAudioPlayer : NSObject

{
    AVAudioNode *_audioNode;
    AVAudioPlayerNode *_audioPlayer;
    SCNAudioSource *_audioSource;
    struct __C3DNode *_nodeRef;
    struct __C3DScene *_scene;
    _Bool _customAudioNode;
    _Bool _completed;
    CDUnknownBlockType willStartPlayback;
    CDUnknownBlockType didFinishPlayback;
}

@property (readonly) struct __C3DScene *scene;
@property (readonly) _Bool customAudioNode;
@property _Bool completed;
@property (readonly) AVAudioPlayerNode *audioPlayer;
@property (copy, nonatomic) CDUnknownBlockType willStartPlayback;
@property (copy, nonatomic) CDUnknownBlockType didFinishPlayback;
@property (nonatomic, readonly) AVAudioNode *audioNode;
@property (nonatomic, readonly) SCNAudioSource *audioSource;

+ (id)audioPlayerWithAVAudioNode:(id)arg1;
+ (id)audioPlayerWithSource:(id)arg1;

- (void)dealloc;
- (void)recycle;
- (void)reset;
- (void)play;
- (id)initWithSource:(id)arg1;
- (id)initWithAVAudioNode:(id)arg1;
- (id)audioBufferFormat;
- (void)setNodeRef:(struct __C3DNode *)arg1;
- (struct __C3DNode *)nodeRef;
- (const void *)__CFObject;

@end

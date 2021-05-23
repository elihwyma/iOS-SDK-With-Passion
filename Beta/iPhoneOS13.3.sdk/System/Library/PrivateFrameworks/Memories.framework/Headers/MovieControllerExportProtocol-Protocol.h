/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/Swift-Protocol.h>

@class AVMutableAudioMix, AVMutableComposition, AVMutableVideoComposition, CALayer, Project;

@protocol MovieControllerExportProtocol <Swift>

@property (nonatomic, readonly) AVMutableComposition *AVComposition;
@property (retain) Project *project;
@property (nonatomic, readonly) CALayer *compositionLayer;
@property (retain, nonatomic) CALayer *playerLayer;
@property (nonatomic, readonly) AVMutableVideoComposition *videoComposition;
@property (nonatomic, readonly) AVMutableAudioMix *audioMix;
@property double exportAspect;
@property struct CGSize size;
@property (copy, nonatomic) CDUnknownBlockType progressUpdateBlock;

- (unsigned short)updateComposition;

@end

/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class AVAssetImageGenerator, NSArray;

__attribute__((visibility("hidden")))
@interface FrameGeneratorQueueObject : NSObject

{
    AVAssetImageGenerator *m_whichInstance;
    CDUnknownBlockType m_completionBlock;
    NSArray *m_times;
}

@property (retain, nonatomic) AVAssetImageGenerator *generator;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (retain, nonatomic) NSArray *times;

+ (id)queueObjectForGenerator:(id)arg1 withTimes:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

- (void)dealloc;
- (id)description;

@end

/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWNode, NSString;

@interface FigBWNodeRenderObserver : NSObject

{
    BWNode *_node;
    CDUnknownBlockType _willRenderSampleBufferHandler;
    CDUnknownBlockType _formatDidBecomeLiveHandler;
}

@property (copy, nonatomic) CDUnknownBlockType willRenderSampleBufferHandler;
@property (copy, nonatomic) CDUnknownBlockType formatDidBecomeLiveHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)node:(id)arg1 format:(id)arg2 didBecomeLiveForOutput:(id)arg3;
- (void)node:(id)arg1 format:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)node:(id)arg1 willRenderSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 forInput:(id)arg3;
- (id)initWithBWNode:(id)arg1;

@end

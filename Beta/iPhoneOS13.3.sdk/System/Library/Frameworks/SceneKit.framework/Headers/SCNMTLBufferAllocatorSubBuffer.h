/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNMTLBuffer.h>

@class SCNFixedSizePage;

__attribute__((visibility("hidden")))
@interface SCNMTLBufferAllocatorSubBuffer : SCNMTLBuffer

{
    SCNFixedSizePage *_parentPage;
}

- (void)dealloc;
- (id)initWithPage:(id)arg1;

@end

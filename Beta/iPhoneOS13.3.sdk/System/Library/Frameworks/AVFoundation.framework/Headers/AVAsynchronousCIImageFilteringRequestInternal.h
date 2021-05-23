/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAsynchronousVideoCompositionRequest, CIImage;

__attribute__((visibility("hidden")))
@interface AVAsynchronousCIImageFilteringRequestInternal : NSObject

{
    AVAsynchronousVideoCompositionRequest *_compositingRequest;
    CDUnknownBlockType _cancellationTest;
    CDUnknownBlockType _defaultCIContextProvider;
    CDUnknownBlockType _completionHandler;
    CIImage *_sourceCIImage;
    struct __CVBuffer *_sourcePBuf;
}

@property (retain, nonatomic) AVAsynchronousVideoCompositionRequest *compositingRequest;
@property (copy, nonatomic) CDUnknownBlockType cancellationTest;
@property (copy, nonatomic) CDUnknownBlockType defaultCIContextProvider;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) CIImage *sourceCIImage;
@property (retain, nonatomic) struct __CVBuffer *sourcePBuf;

- (void)dealloc;
- (void)_willDeallocOrFinalize;

@end

/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVVideoCompositionRenderContext, AVWeakReference, NSArray, NSDictionary;

@protocol AVVideoCompositionInstruction;

__attribute__((visibility("hidden")))
@interface AVAsynchronousVideoCompositionRequestInternal : NSObject

{
    AVWeakReference *_session;
    AVVideoCompositionRenderContext *_renderContext;
    struct OpaqueFigVideoCompositorFrame *_compositionFrame;
    CDStruct_1b6d18a9 _compositionTime;
    NSDictionary *_sourcesByTrackID;
    NSArray *_sourceTrackIDsInClientOrder;
    id <AVVideoCompositionInstruction> _instruction;
    _Bool _isFinished;
}

@property (retain, nonatomic) AVWeakReference *session;
@property (retain, nonatomic) AVVideoCompositionRenderContext *renderContext;
@property (nonatomic) struct OpaqueFigVideoCompositorFrame *compositionFrame;
@property (nonatomic) CDStruct_1b6d18a9 compositionTime;
@property (retain, nonatomic) NSDictionary *sourcesByTrackID;
@property (retain, nonatomic) NSArray *sourceTrackIDsInClientOrder;
@property (retain, nonatomic) id <AVVideoCompositionInstruction> instruction;
@property (nonatomic) _Bool isFinished;

- (void)dealloc;

@end

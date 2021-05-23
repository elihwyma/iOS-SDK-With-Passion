/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigDelegateStorage, FigStateMachine;

@interface FigCameraViewfinderStream : NSObject

{
    FigDelegateStorage *_delegateStorage;
    FigStateMachine *_stateMachine;
    struct OpaqueFigEndpoint *_endpoint;
    struct OpaqueFigEndpointStream *_stream;
    struct OpaqueFigVirtualDisplaySource *_displaySource;
    id _endpointsChangedNotificationToken;
    id _streamsChangedNotificationToken;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)close;
- (void)_setEndpoint:(struct OpaqueFigEndpoint *)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)_setupStateMachine;
- (void)openWithDestination:(id)arg1;
- (int)enqueueVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_handleEndpointsChanged:(id)arg1;
- (void)_handleStreamsChanged:(id)arg1;

@end

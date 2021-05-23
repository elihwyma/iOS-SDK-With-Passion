/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCameraViewfinderSession.h>

@class FigStateMachine;

@protocol FigCameraViewfinderSessionRemoteObject;

@interface FigCameraViewfinderSessionRemote : FigCameraViewfinderSession

{
    id <FigCameraViewfinderSessionRemoteObject> _remoteViewfinderSession;
    unsigned int _state;
    FigStateMachine *_stateMachine;
}

- (void)dealloc;
- (void)_serverDied;
- (void)_setupStateMachine;
- (void)openPreviewStreamWithOptions:(id)arg1;
- (void)closePreviewStream;
- (void)_clientDisconnectedFromServer;
- (id)_initWithRemoteViewfinderSession:(id)arg1 delegateStorage:(id)arg2;
- (void)_previewStreamDidOpen;
- (void)_previewStreamDidCloseWithStatus:(int)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigCameraViewfinderSession, FigDelegateStorage;

@protocol FigCameraViewfinderDelegate><FigCameraViewfinderSessionDelegate, OS_dispatch_queue;

@interface FigCameraViewfinder : NSObject

{
    FigCameraViewfinderSession *_delegateActiveViewfinderSession;
    FigDelegateStorage *_delegateStorage;
}

@property (retain, nonatomic) FigCameraViewfinderSession *delegateActiveViewfinderSession;
@property (readonly) id <FigCameraViewfinderDelegate><FigCameraViewfinderSessionDelegate> delegate;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)cameraViewfinder;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)startWithOptions:(id)arg1;

@end

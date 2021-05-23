/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSMutableArray, NSString, NSXPCListener;

@protocol OS_dispatch_queue;

@interface FigCameraViewfinderServer : NSObject

{
    NSXPCListener *_serviceListener;
    NSMutableArray *_connections;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)start;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)cameraViewfinderSession:(id)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(CDStruct_1b6d18a9)arg4;
- (void)cameraViewfinderSessionPreviewStreamDidOpen:(id)arg1;
- (void)cameraViewfinderSession:(id)arg1 previewStreamDidCloseWithStatus:(int)arg2;
- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2;
- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2;
- (id)_remoteViewfinderForLocalViewfinder:(id)arg1;

@end

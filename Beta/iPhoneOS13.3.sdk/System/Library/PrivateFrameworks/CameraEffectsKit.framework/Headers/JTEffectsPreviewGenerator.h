/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSString, PVRenderer;

@interface JTEffectsPreviewGenerator : NSObject

{
    PVRenderer *_renderer;
    NSString *_name;
}

@property (retain, nonatomic) NSString *name;

- (id)init;
- (void)dealloc;
- (id)initWithRendererOptions:(id)arg1;
- (void)trackStats:(_Bool)arg1;
- (void)_renderJob:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)generatePreviewRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)perfLog;

@end

/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class JTEffectsPreviewGenerationRequest, JTEffectsPreviewGeneratorJob;

@interface JTEffectsPreviewRequestHandler : NSObject

{
    JTEffectsPreviewGenerationRequest *_req;
    JTEffectsPreviewGeneratorJob *_job;
}

- (id)initWithRequest:(id)arg1;
- (id)buildPVRenderRequest;
- (id)buildCallbackMap:(id)arg1;

@end

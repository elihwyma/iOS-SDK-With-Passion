/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable;

__attribute__((visibility("hidden")))
@interface AVCaptureSessionConfiguration : NSObject

{
    long long _configurationID;
    NSArray *_inputs;
    NSArray *_outputs;
    NSHashTable *_videoPreviewLayers;
    NSArray *_connections;
}

@property (readonly) long long configurationID;
@property (readonly) NSArray *inputs;
@property (readonly) NSArray *outputs;
@property (readonly) NSHashTable *videoPreviewLayers;
@property (readonly) NSArray *connections;

- (void)dealloc;
- (id)initWithConfigurationID:(long long)arg1 inputs:(id)arg2 outputs:(id)arg3 videoPreviewLayers:(id)arg4 connections:(id)arg5;
- (id)uniqueInputs:(id)arg1;
- (id)uniqueOutputs:(id)arg1;
- (id)uniqueConnections:(id)arg1;
- (id)uniqueVideoPreviewLayers:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWGraph, BWNodeInput, BWNodeOutput, NSArray, NSMutableArray, NSString;

@protocol BWNodeRenderDelegate;

@interface BWNode : NSObject

{
    NSMutableArray *_inputs;
    NSMutableArray *_outputs;
    NSString *_name;
    NSString *_subgraphName;
    _Bool _supportsConcurrentLiveInputCallbacks;
    _Bool _supportsLiveReconfiguration;
    _Bool _singleInput;
    _Bool _singleOutput;
    BWGraph *_graph;
    id <BWNodeRenderDelegate> _renderDelegate;
    long long _configurationID;
    BWNodeInput *_input;
    BWNodeOutput *_output;
}

@property (nonatomic) _Bool supportsConcurrentLiveInputCallbacks;
@property (nonatomic) _Bool supportsLiveReconfiguration;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *subgraphName;
@property (readonly) NSString *nodeType;
@property (readonly) NSString *nodeSubType;
@property (readonly) NSArray *inputs;
@property (readonly) NSArray *outputs;
@property (readonly) BWNodeInput *input;
@property (readonly) BWNodeOutput *output;
@property (nonatomic) id <BWNodeRenderDelegate> renderDelegate;
@property (nonatomic, readonly) _Bool hasNonLiveConfigurationChanges;
@property (nonatomic) BWGraph *graph;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)addInput:(id)arg1;
- (void)addOutput:(id)arg1;
- (long long)configurationID;
- (void)setConfigurationID:(long long)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (_Bool)allInputsHaveReachedState:(int)arg1;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)_handleMessage:(id)arg1 fromInput:(id)arg2;
- (void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2;
- (void)handleStillImagePrewarmWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 photoManifest:(id)arg3 forInput:(id)arg4;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2;
- (void)makeCurrentConfigurationLive;

@end

/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWNodeOutput, NSArray, NSDictionary;

@interface BWStillImageBufferRouterNode : BWNode

{
    _Bool _usingBravoDevice;
    _Bool _usingPearlDevice;
    _Bool _HDRSupported;
    _Bool _SISSupported;
    _Bool _GNRSISSupported;
    _Bool _LTMHDRSupported;
    NSArray *_inputPortTypes;
    NSDictionary *_portTypeToInput;
    BWNodeOutput *_defaultOutput;
    BWNodeOutput *_HDROutput;
    BWNodeOutput *_SISOutput;
    BWNodeOutput *_bravoTelephotoOutput;
    BWNodeOutput *_pearlInfraredOutput;
}

@property (nonatomic, readonly) BWNodeOutput *defaultOutput;
@property (nonatomic, readonly) BWNodeOutput *HDROutput;
@property (nonatomic, readonly) BWNodeOutput *SISOutput;
@property (nonatomic, readonly) BWNodeOutput *bravoTelephotoOutput;
@property (nonatomic, readonly) BWNodeOutput *pearlInfraredOutput;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)inputForPortType:(id)arg1;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)handleStillImagePrewarmWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 photoManifest:(id)arg3 forInput:(id)arg4;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2;
- (id)_outputForInput:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 metadata:(id)arg3;
- (id)_defaultOutputsForInput:(id)arg1;
- (id)initWithInputPortTypes:(id)arg1 HDRSupported:(_Bool)arg2 SISSupported:(_Bool)arg3 GNRSISSupported:(_Bool)arg4 LTMHDRSupported:(_Bool)arg5 depthDataDeliveryEnabled:(_Bool)arg6;

@end

/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class NSArray, NSMutableArray;

@interface BWStillImageMultiCameraDoserNode : BWNode

{
    NSArray *_portTypes;
    long long _currentSettingsID;
    NSMutableArray *_inputIndicesForWhichDosingIsPerformed;
    NSMutableArray *_stashedObjectsByInputIndex;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithPortTypes:(id)arg1;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)_clearCaptureRequestState;
- (void)_configureCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2;
- (id)_outputForNodeInputIndex:(unsigned long long)arg1;
- (void)_emitStashedObjectsIfReady;
- (unsigned long long)outputIndexForPortType:(id)arg1;

@end

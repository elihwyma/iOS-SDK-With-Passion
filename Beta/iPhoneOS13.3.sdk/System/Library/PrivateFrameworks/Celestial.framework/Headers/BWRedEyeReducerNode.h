/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class CIContext, CIDualRedEyeRepairSession, NSDictionary, NSString;

@interface BWRedEyeReducerNode : BWNode

{
    NSDictionary *_redEyeReductionParametersByPortType;
    struct opaqueCMFormatDescription *_outputFormatDescription;
    CIContext *_ciContext;
    CIDualRedEyeRepairSession *_redEyeRepairSession;
    struct opaqueCMSampleBuffer *_primaryImageSampleBuffer;
    _Bool _skipRepair;
    int _redEyeReductionVersion;
    int _inferenceType;
    NSString *_inferenceAttachmentKey;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (int)inferenceType;
- (id)inferenceAttachmentKey;
- (id)initWithVersion:(int)arg1 sensorConfigurationsByPortType:(id)arg2;
- (void)setInferenceType:(int)arg1;
- (void)setInferenceAttachmentKey:(id)arg1;

@end

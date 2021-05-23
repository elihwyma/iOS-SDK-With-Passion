/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWNodeError, BWNodeInput, NSMutableArray;

@interface BWInferenceSynchronizerNode : BWNode

{
    int _mostRecentEmittedCaptureIdentifier;
    int _indexOfInputProvidingOutputSampleBuffer;
    int _indexOfInputProvidingOnlyInferences;
    int _indexOfInputProvidingPreferredInferences;
    struct {
        NSMutableArray *bufferQueue;
        BWNodeError *mostRecentError;
        int mostRecentCaptureIdentifier;
        int numberOfWraparounds;
        _Bool inputIsLive;
    } _contexts[2];
    struct os_unfair_lock_s _bufferServicingLock;
    unsigned char _maximumNumberOfInflightBuffers;
    unsigned short _errorHandlingModel;
    _Bool _synchronizesTopLevelAttachments;
}

@property (nonatomic, readonly) unsigned short errorHandlingModel;
@property (nonatomic, readonly) BWNodeInput *inputProvidingOutputSampleBuffer;
@property (nonatomic, readonly) BWNodeInput *inputProvidingOnlyInferences;
@property (nonatomic, readonly) BWNodeInput *inputProvidingPreferredInferences;
@property (nonatomic) _Bool synchronizesTopLevelAttachments;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2;
- (id)_bufferArrayToString:(id)arg1;
- (id)initWithIndexOfInputProvidingOutputSampleBuffer:(int)arg1 indexOfInputProvidingPreferredInferences:(int)arg2 errorHandlingModel:(unsigned short)arg3;
- (void)_attemptBufferOrErrorEmission;
- (struct opaqueCMSampleBuffer *)_synchronizedBufferFromQueue:(id)arg1 withIdentifier:(unsigned int)arg2;

@end

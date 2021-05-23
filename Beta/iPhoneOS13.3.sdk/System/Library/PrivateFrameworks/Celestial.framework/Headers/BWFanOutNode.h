/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@interface BWFanOutNode : BWNode

{
    id *_outputsCArray;
    _Bool *_outputsDiscardsAttachedMedia;
    int _outputsCount;
    _Bool _passesThroughIrisReferenceMovieRequests;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithFanOutCount:(int)arg1 mediaType:(unsigned int)arg2;
- (void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2;
- (_Bool)passesThroughIrisReferenceMovieRequests;
- (void)makeCurrentConfigurationLive;
- (_Bool)hasNonLiveConfigurationChanges;
- (void)setDiscardsAttachedMedia:(_Bool)arg1 forOutputIndex:(int)arg2;
- (void)setPassesThroughIrisReferenceMovieRequests:(_Bool)arg1;

@end

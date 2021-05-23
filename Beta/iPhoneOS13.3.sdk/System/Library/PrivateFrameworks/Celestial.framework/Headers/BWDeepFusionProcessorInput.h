/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWStillImageProcessorInput.h>

@class NSArray, NSDictionary;

@protocol BWDeepFusionProcessorInputDelegate;

@interface BWDeepFusionProcessorInput : BWStillImageProcessorInput

{
    id <BWDeepFusionProcessorInputDelegate> _delegate;
    NSDictionary *_evZeroReferenceFrameAttachments;
    CDStruct_1b6d18a9 _evZeroReferenceFramePTS;
    struct __CVBuffer *_syntheticReference;
    NSDictionary *_syntheticReferenceMetadata;
    struct __CVBuffer *_syntheticReferenceFusionMap;
    NSDictionary *_syntheticReferenceFusionMapMetadata;
    struct __CVBuffer *_syntheticLong;
    NSDictionary *_syntheticLongMetadata;
    struct __CVBuffer *_syntheticLongFusionMap;
    NSDictionary *_syntheticLongFusionMapMetadata;
    struct __CVBuffer *_syntheticRealLongFusionMap;
    NSDictionary *_syntheticRealLongFusionMapMetadata;
    void *_skinMask;
    void *_personMask;
    id _faceObservations;
}

@property (retain, nonatomic) id <BWDeepFusionProcessorInputDelegate> delegate;
@property (copy, nonatomic) NSDictionary *evZeroReferenceFrameAttachments;
@property (nonatomic) CDStruct_1b6d18a9 evZeroReferenceFramePTS;
@property (nonatomic, readonly) struct __CVBuffer *syntheticReference;
@property (nonatomic, readonly) NSDictionary *syntheticReferenceMetadata;
@property (nonatomic, readonly) struct __CVBuffer *syntheticReferenceFusionMap;
@property (nonatomic, readonly) NSDictionary *syntheticReferenceFusionMapMetadata;
@property (nonatomic, readonly) struct __CVBuffer *syntheticLong;
@property (nonatomic, readonly) NSDictionary *syntheticLongMetadata;
@property (nonatomic, readonly) struct __CVBuffer *syntheticLongFusionMap;
@property (nonatomic, readonly) NSDictionary *syntheticLongFusionMapMetadata;
@property (nonatomic, readonly) struct __CVBuffer *syntheticRealLongFusionMap;
@property (nonatomic, readonly) NSDictionary *syntheticRealLongFusionMapMetadata;
@property (nonatomic, readonly) struct __CVBuffer *skinMask;
@property (nonatomic, readonly) struct __CVBuffer *personMask;
@property (nonatomic, readonly) NSArray *faceObservations;

- (void)dealloc;
- (void)addSkinMask:(void *)arg1 personMask:(void *)arg2 faceObservations:(id)arg3;
- (void)addBuffer:(struct __CVBuffer *)arg1 metadata:(id)arg2 type:(unsigned long long)arg3;
- (_Bool)receivedAllInferences;

@end

/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWFanOutNode.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface BWAttachedMediaSplitNode : BWFanOutNode

{
    NSArray *_attachedMediaKeys;
    NSMutableDictionary *_attachedMediaFormatDescriptions;
    NSArray *_attachedMediaToPropagateToPrimaryOutput;
    NSMutableSet *_disabledAttachedMediaKeys;
    int _numOutputs;
    _Bool _emitsNodeErrorsForMissingAttachedMedia;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (id)initWithAttachedMediaKeys:(id)arg1 attachedMediaToPropagateToPrimaryOutput:(id)arg2;
- (id)initWithAttachedMediaKeys:(id)arg1;
- (void)setOutputRenderingEnabled:(_Bool)arg1 forAttachedMediaKey:(id)arg2;
- (_Bool)isOutputRenderingEnabledForAttachedMediaKey:(id)arg1;
- (void)setEmitsNodeErrorsForMissingAttachedMedia:(_Bool)arg1;
- (_Bool)emitsNodeErrorsForMissingAttachedMedia;

@end

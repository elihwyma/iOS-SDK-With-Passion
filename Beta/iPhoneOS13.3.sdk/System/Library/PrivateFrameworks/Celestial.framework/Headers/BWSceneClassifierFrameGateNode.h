/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@interface BWSceneClassifierFrameGateNode : BWNode

{
    _Bool _discardsBlurryFrames;
    int _maxFrameRate;
    CDStruct_1b6d18a9 _lastEmittedPTS;
    int _inputFrameCount;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithMaxOutputFrameRate:(int)arg1;
- (void)setDiscardsBlurryFrames:(_Bool)arg1;
- (_Bool)discardsBlurryFrames;

@end

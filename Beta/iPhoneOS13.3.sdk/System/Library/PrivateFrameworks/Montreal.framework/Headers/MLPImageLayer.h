/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <Montreal/MLPLayer.h>

@class NSArray, NSMutableDictionary;

@interface MLPImageLayer : MLPLayer

{
    NSMutableDictionary *_inputImagesToSecondKernel;
    NSMutableDictionary *_inputImagesToFirstKernel;
    NSMutableDictionary *_primaryCurrentStates;
    NSMutableDictionary *_secondaryCurrentStates;
}

@property (readonly) NSArray *inputToSecondKernel;
@property (readonly) NSArray *inputToFirstKernel;
@property (readonly) NSArray *primaryCurrentState;
@property (readonly) NSArray *secondaryCurrentState;
@property (readonly) NSMutableDictionary *inputImagesToSecondKernel;
@property (readonly) NSMutableDictionary *inputImagesToFirstKernel;
@property (readonly) NSMutableDictionary *primaryCurrentStates;
@property (readonly) NSMutableDictionary *secondaryCurrentStates;

- (id)initWithLayerType:(unsigned long long)arg1 name:(id)arg2 neuronType:(int)arg3 neuronParams:(id)arg4;
- (void)allocateInputDictionaries;
- (id)initWithLayerType:(unsigned long long)arg1 name:(id)arg2 parameters:(CDStruct_96916c69 *)arg3;
- (void)updateInputToFirstKernel:(struct NSArray *)arg1 inference:(_Bool)arg2;
- (void)updatePrimaryCurrentState:(struct NSArray *)arg1 inference:(_Bool)arg2;
- (id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long *)arg3 params:(CDStruct_96916c69 *)arg4;
- (void)updateInputToFirstKernel:(struct NSArray *)arg1 index:(id)arg2 inference:(_Bool)arg3;
- (void)updatePrimaryCurrentState:(struct NSArray *)arg1 index:(id)arg2 inference:(_Bool)arg3;
- (void)updateInputToSecondKernel:(struct NSArray *)arg1 inference:(_Bool)arg2;
- (void)updateSecondaryCurrentState:(struct NSArray *)arg1 inference:(_Bool)arg2;
- (void)updateInputToSecondKernel:(struct NSArray *)arg1 index:(id)arg2 inference:(_Bool)arg3;
- (void)updateSecondaryCurrentState:(struct NSArray *)arg1 index:(id)arg2 inference:(_Bool)arg3;

@end

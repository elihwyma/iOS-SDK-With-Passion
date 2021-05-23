/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/MCKeyboardInput.h>

@interface MCDrawInput : MCKeyboardInput

{
    int _drawHand;
    RefPtr_54d74a7c _keyboardLayout;
    struct CGRect _currentLayoutCharacterKeysFrame;
    struct PathResampler _resampler;
}

@property (nonatomic, readonly) struct PathResampler *resampler;
@property (nonatomic) int drawHand;
@property (nonatomic, readonly) RefPtr_54d74a7c keyboardLayout;
@property (nonatomic, readonly) struct CGRect currentLayoutCharacterKeysFrame;
@property (nonatomic, readonly) _Bool isCompleting;
@property (nonatomic, readonly) _Bool isComplete;
@property (nonatomic, readonly) _Bool isDrawing;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (_Bool)canComposeNew:(id)arg1;
- (void)composeNew:(id)arg1;
- (id)initWithKeyboardLayout:(const RefPtr_54d74a7c *)arg1;
- (id)initWithKeyboardLayout:(const RefPtr_54d74a7c *)arg1 currentLayoutCharacterKeysFrame:(struct CGRect)arg2;
- (Vector_edffb8f6)copyLayoutKeys;
- (_Bool)_canCompose;
- (void)composeWith:(id)arg1;
- (void)_appendAndResampleWithPoint:(struct CGPoint)arg1 timestamp:(double)arg2 force:(double)arg3 radius:(double)arg4 shouldFinalize:(_Bool)arg5;
- (void)_updateSampledInputs;
- (void)_updateSampledInputsWithResampler:(const struct PathResampler *)arg1 permanentlyFinalized:(_Bool)arg2;

@end

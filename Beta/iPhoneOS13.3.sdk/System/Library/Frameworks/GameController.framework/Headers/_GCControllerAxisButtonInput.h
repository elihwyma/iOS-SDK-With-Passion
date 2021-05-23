/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <GameController/GCControllerButtonInput.h>

@class GCControllerAxisInput;

@interface _GCControllerAxisButtonInput : GCControllerButtonInput

{
    _Bool _positive;
    GCControllerAxisInput *_axis;
}

@property (weak, nonatomic) GCControllerAxisInput *axis;
@property (nonatomic, readonly, getter=isPositive) _Bool positive;

- (id)description;
- (float)value;
- (id)collection;
- (_Bool)_setValue:(float)arg1;
- (_Bool)isAnalog;
- (_Bool)_setValueFromAxisButton:(float)arg1 queue:(id)arg2;
- (_Bool)_setValue:(float)arg1 queue:(id)arg2;
- (id)initWithAxis:(id)arg1 positive:(_Bool)arg2;
- (_Bool)_setValueFromAxisButton:(float)arg1;

@end

/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <GameController/GCControllerButtonInput.h>

@protocol _GCACHomeButtonDelegate;

@interface _GCACHomeButton : GCControllerButtonInput

{
    id <_GCACHomeButtonDelegate> _delegate;
    _Bool needsReset;
}

- (id)initWithDelegate:(id)arg1;
- (_Bool)_setValue:(float)arg1 queue:(id)arg2;

@end

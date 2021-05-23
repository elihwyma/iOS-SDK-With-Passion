/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class CALayer, CAState, CAStateControllerUndo, NSMutableArray, NSTimer;

__attribute__((visibility("hidden")))
@interface CAStateControllerLayer : NSObject

{
    CALayer *_layer;
    CAState *_currentState;
    CAStateControllerUndo *_undoStack;
    NSMutableArray *_transitions;
    NSTimer *_nextTimer;
    CAState *_nextState;
    float _nextSpeed;
}

@property (readonly) CALayer *layer;
@property (retain, nonatomic) CAState *currentState;
@property (readonly) CAStateControllerUndo *undoStack;

- (void)dealloc;
- (void)invalidate;
- (id)initWithLayer:(id)arg1;
- (void)addTransition:(id)arg1;
- (void)removeTransition:(id)arg1;

@end

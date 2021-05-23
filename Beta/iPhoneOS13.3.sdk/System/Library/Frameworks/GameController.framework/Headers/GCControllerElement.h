/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <Foundation/NSObject.h>

@class GCController;

@interface GCControllerElement : NSObject

{
    GCControllerElement *_collection;
    GCController *_controller;
}

@property (weak, nonatomic) GCController *controller;
@property (weak, nonatomic) GCControllerElement *collection;
@property (nonatomic, readonly, getter=isAnalog) _Bool analog;

- (float)value;
- (_Bool)_setValue:(float)arg1;
- (int)getAndResetTimesPressed;
- (_Bool)_setValue:(float)arg1 queue:(id)arg2;

@end

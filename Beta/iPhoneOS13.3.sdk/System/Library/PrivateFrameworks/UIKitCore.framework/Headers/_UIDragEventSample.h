/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIWindow;

__attribute__((visibility("hidden")))
@interface _UIDragEventSample : NSObject

{
    _Bool _isApplicationEnter;
    _Bool _isApplicationWithin;
    _Bool _isApplicationExit;
    _Bool _isPolicyDriven;
    _Bool _isDragEnd;
    _Bool _hasBeenDelivered;
    unsigned int _windowServerHitTestContextID;
    UIWindow *_window;
    struct CGPoint _sceneLocation;
    struct CGPoint _locationInWindow;
}

@property (nonatomic, readonly) UIWindow *window;
@property (nonatomic, readonly) struct CGPoint sceneLocation;
@property (nonatomic, readonly) struct CGPoint locationInWindow;
@property (nonatomic, readonly) _Bool isApplicationEnter;
@property (nonatomic, readonly) _Bool isApplicationWithin;
@property (nonatomic, readonly) _Bool isApplicationExit;
@property (nonatomic, readonly) _Bool isPolicyDriven;
@property (nonatomic, readonly) _Bool isDragEnd;
@property (nonatomic, readonly) unsigned int windowServerHitTestContextID;
@property (nonatomic) _Bool hasBeenDelivered;

+ (id)sampleFromHIDEvent:(struct __IOHIDEvent *)arg1;

- (id)description;
- (id)hitTestWithEvent:(id)arg1;

@end

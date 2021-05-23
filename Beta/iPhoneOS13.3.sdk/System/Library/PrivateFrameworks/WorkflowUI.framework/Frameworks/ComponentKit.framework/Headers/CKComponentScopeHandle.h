/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class CKComponent, CKComponentController;

@protocol CKComponentStateListener;

@interface CKComponentScopeHandle : NSObject

{
    id <CKComponentStateListener> _listener;
    CKComponentController *_controller;
    int _rootIdentifier;
    _Bool _acquired;
    _Bool _resolved;
    CKComponent *_acquiredComponent;
    int _globalIdentifier;
    Class _componentClass;
    id _state;
}

@property (nonatomic, readonly) CKComponentController *controller;
@property (nonatomic, readonly) Class componentClass;
@property (nonatomic, readonly) id state;
@property (nonatomic, readonly) int globalIdentifier;

+ (id)handleForComponent:(id)arg1;

- (void)dealloc;
- (void)resolve;
- (id)responder;
- (void)updateState:(CDUnknownBlockType)arg1 mode:(unsigned long long)arg2;
- (id)initWithListener:(id)arg1 rootIdentifier:(int)arg2 componentClass:(Class)arg3 initialStateCreator:(CDUnknownBlockType)arg4;
- (id)newHandleWithStateUpdates:(const unordered_multimap_8347d0c8 *)arg1 componentScopeRoot:(id)arg2;
- (id)newHandleToBeReacquiredDueToScopeCollision;
- (id)initWithListener:(id)arg1 globalIdentifier:(int)arg2 rootIdentifier:(int)arg3 componentClass:(Class)arg4 state:(id)arg5 controller:(id)arg6;
- (_Bool)acquireFromComponent:(id)arg1;

@end

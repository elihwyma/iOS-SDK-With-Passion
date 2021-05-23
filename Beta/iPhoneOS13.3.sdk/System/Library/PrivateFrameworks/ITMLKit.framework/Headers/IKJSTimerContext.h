/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKJSManagedArray, JSManagedValue, NSTimer;

@interface IKJSTimerContext : NSObject

{
    _Bool _isRepeating;
    NSTimer *_timer;
    id _ownerObject;
    JSManagedValue *_managedCallback;
    IKJSManagedArray *_managedArgs;
}

@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic, readonly) id ownerObject;
@property (retain, nonatomic, readonly) JSManagedValue *managedCallback;
@property (retain, nonatomic, readonly) IKJSManagedArray *managedArgs;
@property (nonatomic, readonly) _Bool isRepeating;

- (void)dealloc;
- (id)description;
- (void)removeManagedReferences;
- (id)initWithCallback:(id)arg1 callbackArgs:(id)arg2 repeating:(_Bool)arg3 ownerObject:(id)arg4 timer:(id)arg5;

@end

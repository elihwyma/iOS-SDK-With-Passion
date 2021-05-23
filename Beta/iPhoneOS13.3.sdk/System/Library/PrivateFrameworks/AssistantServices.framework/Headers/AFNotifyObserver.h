/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol AFNotifyObserverDelegate, OS_dispatch_queue;

@interface AFNotifyObserver : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _options;
    id <AFNotifyObserverDelegate> _delegate;
    int _registrationToken;
    struct _flags {
        unsigned int delegateRespondsToDidReceiveNotificationWithToken:1;
        unsigned int delegateRespondsToDidChangeStateFromTo:1;
    } _flags;
    unsigned long long _state;
    NSString *_name;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (id)initWithName:(id)arg1 options:(unsigned long long)arg2 queue:(id)arg3 delegate:(id)arg4;
- (void)_handleNotificationWithToken:(int)arg1;
- (void)_updateStateWithToken:(int)arg1;
- (void)getStateWithCompletion:(CDUnknownBlockType)arg1;

@end

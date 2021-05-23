/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface AFNotifyStatePublisher : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    char *_name;
    int _registrationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)_unregister;
- (void)_register;
- (_Bool)_setState:(unsigned long long)arg1 withToken:(int)arg2;
- (_Bool)_getState:(unsigned long long *)arg1 withToken:(int)arg2;
- (id)initWithName:(id)arg1 queue:(id)arg2;
- (void)publishState:(unsigned long long)arg1;
- (void)publishStateWithBlock:(CDUnknownBlockType)arg1;

@end

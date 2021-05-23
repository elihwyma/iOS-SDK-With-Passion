/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_xpc_object, _RWIRelayConnectionToApplicationDelegate;

__attribute__((visibility("hidden")))
@interface _RWIRelayConnectionToApplication : NSObject

{
    id <_RWIRelayConnectionToApplicationDelegate> _delegate;
    NSObject<OS_xpc_object> *_connection;
    NSString *_tag;
}

@property (weak, nonatomic) id <_RWIRelayConnectionToApplicationDelegate> delegate;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;
@property (nonatomic, readonly) _Bool available;
@property (copy, nonatomic) NSString *tag;

- (void)dealloc;
- (void)close;
- (id)initWithConnection:(id)arg1;
- (void)_handleEvent:(id)arg1;
- (id)_deserializeMessage:(id)arg1;
- (void)sendMessage:(id)arg1 userInfo:(id)arg2;

@end

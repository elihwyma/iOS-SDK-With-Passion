/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

@interface IMRemoteURLConnectionMockScheduler : NSObject

{
    NSObject<OS_xpc_object> *_connection;
}

- (id)init;
- (_Bool)_connect;
- (void)scheduleMockResponse:(id)arg1 forURL:(id)arg2;
- (void)scheduleMockResponse:(id)arg1;

@end

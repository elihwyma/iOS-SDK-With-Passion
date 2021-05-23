/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class SGDaemonConnection;

@interface SGRemoteObjectProxy : NSObject

{
    SGDaemonConnection *_connection;
    _Bool _queuesRequestsIfBusy;
}

- (void)forwardInvocation:(id)arg1;
- (id)initWithConnection:(id)arg1 queuesRequestsIfBusy:(_Bool)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

@interface REUpNextSiriClient : NSObject

{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)dealloc;
- (void)completedRequestWithDomain:(id)arg1;
- (void)_performOnRemoteObject:(CDUnknownBlockType)arg1;

@end

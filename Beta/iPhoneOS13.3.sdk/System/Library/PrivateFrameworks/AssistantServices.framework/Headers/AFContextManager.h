/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class CPDistributedMessagingCenter;

@interface AFContextManager : NSObject

{
    struct __CFArray *_contextProviders;
    CPDistributedMessagingCenter *_center;
}

+ (id)defaultContextManager;

- (id)init;
- (void)dealloc;
- (void)_startListening;
- (void)_stopListening;
- (void)removeContextProvider:(id)arg1;
- (_Bool)addContextProvider:(id)arg1;
- (void)nothing;
- (void)_collateContextsIntoArray:(id)arg1;
- (void)_shutdownServer;
- (id)_serverName;
- (id)_collateContexts;
- (void)startCenter:(id)arg1;

@end

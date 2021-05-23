/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class MRMediaRemoteService, NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRAVRoutingClientController : NSObject

{
    MRMediaRemoteService *_mediaRemoteService;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_pendingCompletionHandlersForCategories;
    NSMutableDictionary *_cachedRoutesForCategories;
}

@property (nonatomic, readonly) MRMediaRemoteService *mediaRemoteService;

- (id)init;
- (void)dealloc;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (id)initWithMediaRemoteService:(id)arg1;
- (void)fetchPickableRoutesForCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_cacheFetchedPickableRoutes:(id)arg1 forCategory:(id)arg2;
- (void)_flushPendingCompletionHandlersWithPickableRoutes:(id)arg1 forCategory:(id)arg2;

@end

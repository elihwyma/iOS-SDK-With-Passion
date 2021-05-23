/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface MRPlaybackQueueClient : NSObject

{
    NSMutableDictionary *_controllers;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)_handlePlayerPathRemovedNotification:(id)arg1;
- (void)_handleApplicationRemovedNotification:(id)arg1;
- (void)_handleOriginRemovedNotification:(id)arg1;
- (id)subscriptionControllerForPlayerPath:(id)arg1;

@end

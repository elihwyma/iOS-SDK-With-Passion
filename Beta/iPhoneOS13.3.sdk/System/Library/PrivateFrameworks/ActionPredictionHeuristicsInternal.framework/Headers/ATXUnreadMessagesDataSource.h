/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class ATXHeuristicDevice;

@protocol OS_dispatch_queue;

@interface ATXUnreadMessagesDataSource : NSObject

{
    ATXHeuristicDevice *_device;
    NSObject<OS_dispatch_queue> *_resultsQueue;
}

- (id)initWithDevice:(id)arg1;
- (void)unreadMessagesWithLimit:(long long)arg1 callback:(CDUnknownBlockType)arg2;

@end

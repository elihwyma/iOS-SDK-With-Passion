/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface _VUIAppDocumentUpdateEventObserverContext : NSObject

{
    NSSet *_eventDescriptors;
    NSMutableDictionary *_refreshTimerByEventDescriptor;
    CDUnknownBlockType _refreshTimerFiredBlock;
}

@property (copy, nonatomic) NSSet *eventDescriptors;
@property (retain, nonatomic) NSMutableDictionary *refreshTimerByEventDescriptor;
@property (copy, nonatomic) CDUnknownBlockType refreshTimerFiredBlock;

- (void)dealloc;
- (void)invalidate;
- (void)_cancelAllRefreshTimers;
- (id)_refreshTimerWithRefreshTimeEventDescriptor:(id)arg1;
- (void)_startRefreshTimer:(id)arg1;
- (void)_cancelRefreshTimers:(id)arg1;
- (void)_cancelRefreshTimer:(id)arg1;

@end

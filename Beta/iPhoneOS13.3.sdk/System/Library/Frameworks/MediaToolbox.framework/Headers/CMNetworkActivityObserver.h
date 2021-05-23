/*
 Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import <NSObject.h>

@class CMNetworkActivityMonitor;

__attribute__((visibility("hidden")))
@interface CMNetworkActivityObserver : NSObject

{
    _Bool _valid;
    _Bool _registered;
    int _cmActivityToken;
    int _cmActivityPollingToken;
    CMNetworkActivityMonitor *_activityMonitor;
}

@property (nonatomic, readonly) CMNetworkActivityMonitor *activityMonitor;

+ (id)registeredObserverForActivityMonitor:(id)arg1;

- (void)dealloc;
- (void)invalidate;
- (void)unregisterObservations;
- (void)_pollWithInterval:(double)arg1 networkActivityDidCompleteBlock:(CDUnknownBlockType)arg2;
- (void)registerObservations;
- (id)initForActivityMonitor:(id)arg1;

@end

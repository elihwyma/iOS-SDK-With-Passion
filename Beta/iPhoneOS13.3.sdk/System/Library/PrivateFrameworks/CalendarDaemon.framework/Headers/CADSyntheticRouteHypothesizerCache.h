/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface CADSyntheticRouteHypothesizerCache : NSObject

{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_eventExternalURLToSyntheticRouteHypothesizerMap;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) NSMutableDictionary *eventExternalURLToSyntheticRouteHypothesizerMap;

+ (id)sharedInstance;

- (id)_init;
- (id)syntheticRouteHypothesizerForEventExternalURL:(id)arg1;
- (void)addSyntheticRouteHypothesizer:(id)arg1 forEventExternalURL:(id)arg2;
- (void)removeSyntheticRouteHypothesizerForEventExternalURL:(id)arg1;

@end

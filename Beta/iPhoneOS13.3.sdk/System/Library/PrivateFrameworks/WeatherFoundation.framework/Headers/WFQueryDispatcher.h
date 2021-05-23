/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface WFQueryDispatcher : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_queriesPendingResponse;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *queriesPendingResponse;

- (id)init;
- (void)cancelTaskWithIdentifier:(id)arg1;
- (void)invalidateCacheWithIdentifier:(id)arg1;
- (void)locationForString:(id)arg1 taskIdentifier:(id)arg2 results:(CDUnknownBlockType)arg3;
- (void)locationForCoordinate:(struct CLLocationCoordinate2D)arg1 taskIdentifier:(id)arg2 results:(CDUnknownBlockType)arg3;
- (void)locationForSearchCompletion:(id)arg1 taskIdentifier:(id)arg2 results:(CDUnknownBlockType)arg3;
- (void)removePendingQueryWithIdentifier:(id)arg1;
- (void)dispatchQuery:(id)arg1;
- (void)fetchFavoriteLocationsWithTaskIdentifier:(id)arg1 results:(CDUnknownBlockType)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@protocol OS_dispatch_queue;

@interface RadioRecentStationsController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _hasRefreshed;
    _Bool _hasValidStationGroups;
    NSMutableArray *_pendingRecentStations;
    NSArray *_serverRecentStationGroups;
    NSArray *_stationGroups;
}

@property (copy, nonatomic, readonly) NSArray *stationGroups;
@property (copy, nonatomic, readonly) NSArray *stations;

- (id)init;
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_newRecentStationsRequest;
- (void)_handleRecentStationsResponse:(id)arg1 fromRequest:(id)arg2 pendingRecentStations:(id)arg3 isInitialCacheLoad:(_Bool)arg4;
- (void)_createStationGroups;
- (void)_insertPendingRecentStation:(id)arg1;
- (void)_postStationsDidChangeNotification;
- (void)insertPendingRecentStation:(id)arg1;
- (void)insertPendingRecentStationDictionary:(id)arg1;
- (void)removePendingRecentStation:(id)arg1;

@end

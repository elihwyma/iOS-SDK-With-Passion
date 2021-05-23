/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNTrace;

@interface MNTraceLoader : NSObject

{
    MNTrace *_trace;
}

- (id)loadTraceWithPath:(id)arg1 outError:(id *)arg2;
- (_Bool)_loadTraceVersion;
- (_Bool)_updateTraceFromVersion:(unsigned long long)arg1 outError:(id *)arg2;
- (_Bool)_loadInfoTable;
- (_Bool)_loadLocationsTable;
- (_Bool)_loadDirectionsTable;
- (_Bool)_loadETAUpdatesTable;
- (_Bool)_loadCompassHeadingDataTable;
- (_Bool)_loadMotionDataTable;
- (_Bool)_loadVehicleDataTable;
- (_Bool)_loadRouteSelectionsTable;
- (_Bool)_loadAnnotatedUserBehaviorTable;
- (_Bool)_loadAnnotatedUserEnvironmentTable;
- (_Bool)_loadCommuteDestinationsTable;
- (_Bool)_loadCommuteDirectionsRequestsTable;
- (_Bool)_loadMiscInfo;
- (_Bool)_executeQuery:(id)arg1 rowHandler:(CDUnknownBlockType)arg2;
- (_Bool)_tableExists:(id)arg1;
- (id)_handleUpdateError;

@end

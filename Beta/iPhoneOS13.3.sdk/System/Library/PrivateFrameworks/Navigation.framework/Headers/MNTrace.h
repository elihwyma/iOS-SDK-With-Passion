/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MNTrace : NSObject

{
    struct sqlite3 *_db;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSObject<OS_dispatch_group> *_writeGroup;
    NSArray *_bookmarks;
    NSArray *_bookmarkImages;
    unsigned long long _version;
    unsigned long long _originalVersion;
    _Bool _isSimulation;
    _Bool _isRouteGenius;
    _Bool _usesCLMapCorrection;
    double _initialCourse;
    NSArray *_locations;
    NSArray *_directions;
    NSArray *_etaUpdates;
    NSArray *_headingData;
    NSArray *_motionData;
    NSArray *_vehicleHeadingData;
    NSArray *_vehicleSpeedData;
    NSData *_startWaypointData;
    NSData *_endWaypointData;
    NSArray *_routeSelections;
    NSArray *_annotatedUserBehavior;
    NSArray *_annotatedUserEnvironments;
    NSArray *_commuteDestinations;
    NSArray *_commuteDirectionsRequests;
    _Bool _copyToCrashReporter;
    int _mainTransportType;
    NSString *_tracePath;
    NSDictionary *_miscInfo;
}

@property (nonatomic, readonly) struct sqlite3 *db;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *writeQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *writeGroup;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long originalVersion;
@property (nonatomic) _Bool isSimulation;
@property (nonatomic) _Bool isRouteGenius;
@property (nonatomic) _Bool usesCLMapCorrection;
@property (nonatomic) double initialCourse;
@property (retain, nonatomic) NSArray *locations;
@property (retain, nonatomic) NSArray *directions;
@property (retain, nonatomic) NSArray *etaUpdates;
@property (retain, nonatomic) NSArray *headingData;
@property (retain, nonatomic) NSArray *motionData;
@property (retain, nonatomic) NSArray *vehicleHeadingData;
@property (retain, nonatomic) NSArray *vehicleSpeedData;
@property (retain, nonatomic) NSData *startWaypointData;
@property (retain, nonatomic) NSData *endWaypointData;
@property (retain, nonatomic) NSArray *routeSelections;
@property (retain, nonatomic) NSArray *annotatedUserBehavior;
@property (retain, nonatomic) NSArray *annotatedUserEnvironments;
@property (retain, nonatomic) NSArray *bookmarks;
@property (retain, nonatomic) NSArray *bookmarkImages;
@property (retain, nonatomic) NSArray *commuteDestinations;
@property (retain, nonatomic) NSArray *commuteDirectionsRequests;
@property (retain, nonatomic) NSDictionary *miscInfo;
@property (nonatomic, readonly) NSString *tracePath;
@property (nonatomic) _Bool copyToCrashReporter;
@property (nonatomic, readonly) int mainTransportType;

- (id)init;
- (void)dealloc;
- (void)copyTraceToCrashReporter;
- (_Bool)createTempTraceForRecording;
- (_Bool)startWritingTraceToPath:(id)arg1;
- (_Bool)openTrace:(id)arg1 outError:(id *)arg2;
- (_Bool)closeTrace;
- (_Bool)startWritingTraceToFile:(id)arg1;
- (id)serializableBookmarks;
- (id)_handleOpenErrorWithPath:(id)arg1;

@end

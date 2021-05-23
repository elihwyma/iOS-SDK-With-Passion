/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@class CLLocationManager, NSString, RTRoutineManager;

@interface _DKLocationMonitor : _DKMonitor

{
    CLLocationManager *_locationManager;
    RTRoutineManager *_routineManager;
    _Bool _locationEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)entitlements;
+ (id)eventStream;

- (id)init;
- (void)stop;
- (void)start;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didVisit:(id)arg2;
- (id)_locationFromVisit:(id)arg1;
- (void)_handleVisit:(id)arg1;

@end

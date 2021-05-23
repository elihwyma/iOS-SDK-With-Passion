/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionListener, BSServiceDomainSpecification, NSMutableDictionary, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

@interface FBServiceFacilityServer : NSObject

{
    BSServiceDomainSpecification *_domain;
    NSObject<OS_dispatch_queue> *_queue;
    BSServiceConnectionListener *_serviceListener;
    NSMutableDictionary *_facilitiesByIdentifier;
    NSMutableSet *_completedMilestones;
    NSMutableDictionary *_suspendedFacilitiesByIdentifier;
    NSMutableSet *_pendingConnects;
}

@property (nonatomic, readonly) BSServiceDomainSpecification *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)run;
- (id)_initWithDomain:(id)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)addFacility:(id)arg1;
- (void)removeFacility:(id)arg1;
- (void)_facilityQueue_facility:(id)arg1 handleMessage:(id)arg2 client:(id)arg3;
- (_Bool)_queue_areFacilityPrerequisitesSatisfied:(id)arg1;
- (void)_queue_evaluateSuspendedFacility:(id)arg1;
- (void)_queue_evaluateSuspendedFacilities;
- (void)noteMilestoneReached:(id)arg1;

@end

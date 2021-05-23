/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <Foundation/NSObject.h>

@class CARNavigationOwnershipManager, CPTrip, NSHashTable, NSString;

@protocol CARNavigationOwnershipManagerDelegate;

@interface CPSNavigator : NSObject

{
    _Bool _completed;
    CPTrip *_trip;
    id <CARNavigationOwnershipManagerDelegate> _navigationOwnershipDelegate;
    NSHashTable *_displayDelegates;
    CARNavigationOwnershipManager *_navigationOwnershipManager;
}

@property (nonatomic, getter=isCompleted) _Bool completed;
@property (retain, nonatomic) NSHashTable *displayDelegates;
@property (retain, nonatomic) CARNavigationOwnershipManager *navigationOwnershipManager;
@property (nonatomic, readonly) CPTrip *trip;
@property (weak, nonatomic) id <CARNavigationOwnershipManagerDelegate> navigationOwnershipDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (void)navigationOwnershipChangedToOwner:(unsigned long long)arg1;
- (void)pauseTripForReason:(unsigned long long)arg1 description:(id)arg2;
- (void)finishTrip;
- (void)cancelTrip;
- (void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2;
- (void)updateTravelEstimates:(id)arg1 forManeuver:(id)arg2;
- (void)addDisplayDelegate:(id)arg1;
- (void)removeDisplayDelegate:(id)arg1;

@end

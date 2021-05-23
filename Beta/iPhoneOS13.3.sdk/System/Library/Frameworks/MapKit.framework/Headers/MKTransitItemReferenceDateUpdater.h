/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@protocol MKTransitItemReferenceDateUpdaterDelegate;

@interface MKTransitItemReferenceDateUpdater : NSObject

{
    struct os_unfair_lock_s _lock;
    _Bool _active;
    id <MKTransitItemReferenceDateUpdaterDelegate> _delegate;
}

@property (weak, nonatomic) id <MKTransitItemReferenceDateUpdaterDelegate> delegate;
@property (nonatomic, getter=isActive) _Bool active;

+ (void)initialize;
+ (id)referenceDate;
+ (double)referenceDateAsTimeInterval;
+ (void)_addUpdater:(id)arg1;
+ (void)_removeUpdater:(id)arg1;
+ (_Bool)_needsUpdateReferenceDate;
+ (void)_updateReferenceDate;
+ (id)_currentTimeWithRoundedSeconds;
+ (unsigned long long)_updaterCount;
+ (void)_cancelReferenceDateUpdate;
+ (void)_referenceDateUpdateTimerFired;
+ (void)_scheduleReferenceDateUpdate;

- (id)initWithDelegate:(id)arg1;

@end

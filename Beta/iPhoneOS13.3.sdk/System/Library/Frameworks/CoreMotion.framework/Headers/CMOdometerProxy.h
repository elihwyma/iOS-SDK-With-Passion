/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CMOdometer;

@protocol OS_dispatch_queue;

@interface CMOdometerProxy : NSObject

{
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fCallbackQueue;
    struct CLConnectionClient *fLocationdConnection;
    CDUnknownBlockType fHandler;
    long long fGpsAvailability;
    CMOdometer *_odometer;
    double _totalDistance;
    double _averageSpeed;
    double _startDate;
}

@property (nonatomic) CMOdometer *odometer;
@property double totalDistance;
@property double averageSpeed;
@property double startDate;

- (void)dealloc;
- (void)_teardown;
- (void)_stopOdometerUpdates;
- (id)initWithOdometer:(id)arg1;
- (void)_startDaemonConnection;
- (void)_startOdometerUpdatesWithHandler:(CDUnknownBlockType)arg1;

@end

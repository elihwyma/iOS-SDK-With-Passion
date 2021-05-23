/*
 Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

#import <NSObject.h>

@class CARSessionStatus;

@interface CRVehicleInformation : NSObject

{
    CARSessionStatus *_currentSessionStatus;
}

@property (retain, nonatomic) CARSessionStatus *currentSessionStatus;
@property (nonatomic, readonly) unsigned long long driverPosition;
@property (nonatomic, readonly) unsigned long long vehicleAmbientBrightness;

- (id)init;

@end

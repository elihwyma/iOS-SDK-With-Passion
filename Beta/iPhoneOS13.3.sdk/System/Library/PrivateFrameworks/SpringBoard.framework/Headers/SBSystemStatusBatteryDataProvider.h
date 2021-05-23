/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, STBatteryStatusDomainPublisher;

@interface SBSystemStatusBatteryDataProvider : NSObject

{
    _Bool _shouldExposeNotChargingState;
    STBatteryStatusDomainPublisher *_batteryDataPublisher;
}

@property (nonatomic, readonly) STBatteryStatusDomainPublisher *batteryDataPublisher;
@property (nonatomic) _Bool shouldExposeNotChargingState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_updateData;
- (void)_registerForNotifications;
- (void)_noteNotChargingStatusChanged;
- (id)_internalBatteryDevice;
- (_Bool)_isInNotChargingState;
- (void)_updateShouldExposeNotChargingState;

@end

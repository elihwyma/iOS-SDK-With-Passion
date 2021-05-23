/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDatabaseValueCache, HDProfile, NSNumber;

@interface HDDeviceManager : NSObject

{
    HDProfile *_profile;
    HDDatabaseValueCache *_devicesByPersistentID;
    HDDatabaseValueCache *_deviceEntitiesByDevice;
    NSNumber *_noneDeviceID;
}

@property (retain, nonatomic) HDDatabaseValueCache *devicesByPersistentID;
@property (retain, nonatomic) HDDatabaseValueCache *deviceEntitiesByDevice;
@property (copy) NSNumber *noneDeviceID;

- (id)init;
- (id)initWithProfile:(id)arg1;
- (id)deviceForPersistentID:(id)arg1 error:(id *)arg2;
- (id)deviceEntityForDevice:(id)arg1 error:(id *)arg2;
- (id)deviceEntityForNoDeviceWithError:(id *)arg1;
- (id)deviceEntitiesForDevice:(id)arg1 error:(id *)arg2;
- (id)deviceEntitiesWithProperty:(id)arg1 matchingValues:(id)arg2 error:(id *)arg3;
- (id)currentDeviceEntityWithError:(id *)arg1;
- (id)_noneDevice;
- (id)devicesWithProperty:(id)arg1 matchingValues:(id)arg2 error:(id *)arg3;
- (id)allDeviceEntitiesWithError:(id *)arg1;

@end

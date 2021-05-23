/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString, STUserDeviceState;

@protocol STSerializableManagedObject;

@interface STCoreDevice : NSManagedObject

@property (retain, nonatomic) NSSet *userDeviceAddresses;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) short platform;
@property (retain, nonatomic) STUserDeviceState *localUserDeviceState;
@property (retain, nonatomic) NSSet *userDeviceStates;
@property (retain, nonatomic) NSSet *usages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <STSerializableManagedObject> syncableRootObject;

+ (id)fetchDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)fetchOrCreateDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)fetchOrCreateLocalDeviceInContext:(id)arg1 error:(id *)arg2;
+ (id)fetchRequestForOrphanedDevices;

@end

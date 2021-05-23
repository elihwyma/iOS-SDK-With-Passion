/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface HDDemoDataBaseSampleGeneratorObjectCollection : NSObject

{
    NSMutableSet *_objectsFromPhone;
    NSMutableSet *_objectsFromWatch;
    NSMutableDictionary *_objectsFromPhoneApps;
    NSMutableDictionary *_workoutUUIDToAssocatedObjectUUIDs;
}

- (id)init;
- (void)addObjectFromPhone:(id)arg1;
- (void)addObjectsFromPhone:(id)arg1;
- (void)addObjectFromWatch:(id)arg1;
- (void)addObjects:(id)arg1 fromPhoneAppWithBundleIdentifier:(id)arg2;
- (void)addObjectsFromWatch:(id)arg1;
- (id)objectsFromPhone;
- (id)objectsFromWatch;
- (id)objectsFromPhoneApps;
- (void)setAssociatedObjectUUIDs:(id)arg1 forWorkoutUUID:(id)arg2;
- (void)enumerateWorkoutAssociations:(CDUnknownBlockType)arg1;

@end

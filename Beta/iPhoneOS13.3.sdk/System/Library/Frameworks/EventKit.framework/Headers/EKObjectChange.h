/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class EKObjectID;

@interface EKObjectChange : NSObject

{
    int _changeType;
    EKObjectID *_changedObjectID;
    long long _changeID;
    long long _sequenceNumber;
}

@property (nonatomic, readonly) long long changeID;
@property (nonatomic, readonly) long long sequenceNumber;
@property (nonatomic, readonly) EKObjectID *changedObjectID;
@property (nonatomic, readonly) int changeType;

+ (long long)objectType;
+ (int)entityType;
+ (void)fetchChangesToObjectsOfTypes:(id)arg1 inStore:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
+ (void)fetchChangesToObjectsOfTypes:(id)arg1 inSource:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
+ (void)fetchChangesToObjectsOfTypes:(id)arg1 inCalendar:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
+ (CDUnknownBlockType)processFetchResults:(CDUnknownBlockType)arg1;
+ (id)objectChangeWithProperties:(id)arg1;
+ (id)CADObjectChangeIDsFromEKObjectChanges:(id)arg1;
+ (void)fetchObjectChangesInStore:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchObjectChangesInSource:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchObjectChangesInCalendar:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)callClientResultsHandler:(CDUnknownBlockType)arg1 changesTruncated:(_Bool)arg2 latestToken:(long long)arg3 changes:(id)arg4;
+ (CDUnknownBlockType)_filterObjectChangesNotConformingToOwnerIDProvidingProtocol:(CDUnknownBlockType)arg1;
+ (void)fetchChangesToOwnerIDProvidingObjectsOfTypes:(id)arg1 inStore:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
+ (void)fetchChangesToOwnerIDProvidingObjectsOfTypes:(id)arg1 inSource:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
+ (void)fetchChangesToOwnerIDProvidingObjectsOfTypes:(id)arg1 inCalendar:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithChangeProperties:(id)arg1;
- (id)serializedPropertiesForConsumingChange;

@end

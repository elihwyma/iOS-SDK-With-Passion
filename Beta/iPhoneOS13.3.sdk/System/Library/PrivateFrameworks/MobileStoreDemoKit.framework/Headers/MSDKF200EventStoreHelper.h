/*
 Image: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSManagedObjectContext, NSPersistentContainer;

@interface MSDKF200EventStoreHelper : NSObject

{
    NSPersistentContainer *_container;
    NSManagedObjectContext *_context;
    NSArray *_eventsToReport;
}

@property (retain) NSPersistentContainer *container;
@property (retain) NSManagedObjectContext *context;
@property (retain) NSArray *eventsToReport;

+ (id)sharedInstance;
+ (id)requiredKeysInEvent;

- (id)init;
- (_Bool)prepareContainerFolder;
- (void)saveEventInPersistentStore:(id)arg1;
- (id)buildEventsInfoFromEventEntities:(id)arg1;
- (void)fetchEventsFromPersistentStoreWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)thresholdTimestampForOutdatedEvent;
- (void)deleteEventsFromPersistentStoreWithReuqest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveEvent:(id)arg1;
- (void)fetchEventsWithPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 fetchOffset:(unsigned long long)arg3 completionHanlder:(CDUnknownBlockType)arg4;
- (id)fetchUncommitedEventsForPing;
- (void)markLastF200EventPingAsCommitted:(_Bool)arg1;
- (void)purgeOutdatedEvents;

@end

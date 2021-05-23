/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class CKServerChangeToken, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface PFCloudKitImportDatabaseContext : NSObject

{
    NSSet *_interestingZoneIDs;
    NSMutableSet *_changedRecordZoneIDs;
    NSMutableSet *_deletedRecordZoneIDs;
    NSMutableSet *_purgedRecordZoneIDs;
    CKServerChangeToken *_updatedChangeToken;
}

@property (copy, nonatomic, readonly) NSSet *interestingZoneIDs;
@property (nonatomic, readonly) NSSet *changedRecordZoneIDs;
@property (nonatomic, readonly) NSSet *deletedRecordZoneIDs;
@property (nonatomic, readonly) NSSet *purgedRecordZoneIDs;
@property (retain, nonatomic) CKServerChangeToken *updatedChangeToken;

- (void)dealloc;
- (id)description;
- (id)initWithInterestingZoneIDs:(id)arg1;
- (void)zoneWithIDChanged:(id)arg1;
- (void)zoneWithIDWasDeleted:(id)arg1;
- (void)zoneWithIDWasPurged:(id)arg1;
- (_Bool)hasWorkToDo;

@end

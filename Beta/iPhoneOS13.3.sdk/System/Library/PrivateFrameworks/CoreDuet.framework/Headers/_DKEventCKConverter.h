/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class CKRecordZoneID;

@interface _DKEventCKConverter : NSObject

{
    CKRecordZoneID *_zoneID;
}

@property (retain) CKRecordZoneID *zoneID;

- (id)initWithZoneID:(id)arg1;
- (id)eventsFromRecords:(id)arg1;
- (id)eventIDsFromRecordIDsAndTypes:(id)arg1;
- (id)recordsFromEvents:(id)arg1;
- (id)recordIDsFromEventIDs:(id)arg1;
- (id)eventDataFromRecord:(id)arg1;
- (id)recordFromEventData:(id)arg1 event:(id)arg2;

@end

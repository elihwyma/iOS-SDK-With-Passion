/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class CKRecordZoneID, FCCKPrivateDatabase;

@protocol FCCKRecordZoneDelegate;

@interface FCCKRecordZone : NSObject

{
    _Bool _zoneReady;
    CKRecordZoneID *_recordZoneID;
    FCCKPrivateDatabase *_database;
    id <FCCKRecordZoneDelegate> _delegate;
}

@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (weak, nonatomic) id <FCCKRecordZoneDelegate> delegate;
@property (retain, nonatomic) CKRecordZoneID *recordZoneID;
@property (getter=isZoneReady) _Bool zoneReady;

- (id)description;
- (void)performActionWithRecordZone:(CDUnknownBlockType)arg1;
- (id)initWithDatabase:(id)arg1 delegate:(id)arg2 recordZoneID:(id)arg3;
- (void)fetchChangesWithChangeToken:(id)arg1 desiredKeys:(id)arg2 fetchAllChanges:(_Bool)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;

@end

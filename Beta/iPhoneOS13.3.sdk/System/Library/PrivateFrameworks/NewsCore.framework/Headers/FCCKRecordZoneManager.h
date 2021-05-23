/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCAsyncSerialQueue, FCCKPrivateDatabase, NSArray, NSDictionary, NSString;

@interface FCCKRecordZoneManager : NSObject

{
    FCCKPrivateDatabase *_database;
    NSArray *_recordZoneIDs;
    NSDictionary *_fcRecordZonesByName;
    NSDictionary *_ckRecordZonesByID;
    FCAsyncSerialQueue *_serialQueue;
}

@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (retain, nonatomic) NSArray *recordZoneIDs;
@property (retain, nonatomic) NSDictionary *fcRecordZonesByName;
@property (retain, nonatomic) NSDictionary *ckRecordZonesByID;
@property (retain, nonatomic) FCAsyncSerialQueue *serialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)ensureRecordZoneExistsWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDatabase:(id)arg1 recordZoneNames:(id)arg2;
- (id)recordZoneWithName:(id)arg1;
- (void)prepareRecordZonesForUseWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

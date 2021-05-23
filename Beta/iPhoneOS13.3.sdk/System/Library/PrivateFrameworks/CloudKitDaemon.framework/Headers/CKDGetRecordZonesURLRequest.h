/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDGetRecordZonesURLRequest : CKDURLRequest

{
    _Bool _onlyFetchPCSInfo;
    NSArray *_recordZones;
    CDUnknownBlockType _recordZoneFetchedBlock;
    NSArray *_zoneIDs;
    NSMutableDictionary *_zoneIDByRequestID;
}

@property (retain, nonatomic) NSArray *zoneIDs;
@property (retain, nonatomic) NSMutableDictionary *zoneIDByRequestID;
@property (nonatomic, readonly) NSArray *recordZones;
@property (nonatomic) _Bool onlyFetchPCSInfo;
@property (copy, nonatomic) CDUnknownBlockType recordZoneFetchedBlock;

- (int)operationType;
- (id)initWithRecordZoneIDs:(id)arg1;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestOperationClasses;
- (_Bool)allowsAnonymousAccount;
- (id)zoneIDsToLock;

@end

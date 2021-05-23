/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCCKDatabaseRecordVersionMiddleware : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)database:(id)arg1 willEnqueueOperation:(id)arg2;
- (id)clientToServerRecordID:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)serverToClientRecordID:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)clientToServerRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)serverToClientRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)clientToServerRecord:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)serverToClientRecord:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)clientToServerRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)serverToClientRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)clientToServerRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id *)arg4;
- (id)serverToClientRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id *)arg4;

@end

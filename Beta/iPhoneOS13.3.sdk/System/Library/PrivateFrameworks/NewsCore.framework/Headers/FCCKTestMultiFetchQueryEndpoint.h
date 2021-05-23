/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCCKTestMultiFetchQueryEndpoint : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleQueryOperation:(id)arg1 withRecords:(id)arg2 droppedFeeds:(id)arg3;
- (id)_collectRecordsWithRecords:(id)arg1 recordIDs:(id)arg2 linkKeysByRecordType:(id)arg3 visitedRecordIDs:(id)arg4;
- (id)_collectRecordIDsFromRecords:(id)arg1 linkKeysByRecordType:(id)arg2;

@end

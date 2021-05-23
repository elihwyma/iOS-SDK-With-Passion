/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray, NSDictionary;

@interface FCCKPrivateFetchRecordZonesOperation : FCCKPrivateDatabaseOperation

{
    NSArray *_recordZoneIDs;
    CDUnknownBlockType _fetchRecordZonesCompletionBlock;
    NSDictionary *_resultRecordZonesByZoneID;
}

@property (retain, nonatomic) NSDictionary *resultRecordZonesByZoneID;
@property (copy, nonatomic) NSArray *recordZoneIDs;
@property (copy, nonatomic) CDUnknownBlockType fetchRecordZonesCompletionBlock;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;

@end

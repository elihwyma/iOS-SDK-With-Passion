/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol WLMigrationDataCoordinatorDelegate;

@interface WLMigrationDataCoordinator : NSObject

{
    _Bool _doneSent;
    _Bool _stashDataLocally;
    id <WLMigrationDataCoordinatorDelegate> _delegate;
}

@property (weak, nonatomic, readonly) id <WLMigrationDataCoordinatorDelegate> delegate;
@property (nonatomic) _Bool stashDataLocally;
@property (nonatomic, readonly) NSString *downloadsPath;

+ (unsigned long long)downloadSegmentSize;
+ (_Bool)_allowSegmentedDownloads;

- (id)initWithDelegate:(id)arg1;
- (void)_fetchSummariesFromSource:(id)arg1 forMigrator:(id)arg2 account:(id)arg3 statistics:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_fetchAccountsFromSource:(id)arg1 forMigrator:(id)arg2 statistics:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_recordSummaryForMigrator:(id)arg1 withInfo:(id)arg2 account:(id)arg3;
- (void)_downloadFileInMultipleSegmentsFromSource:(id)arg1 forMigrator:(id)arg2 summary:(id)arg3 account:(id)arg4 segmentCompletion:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_downloadSegmentsFromSource:(id)arg1 forMigrator:(id)arg2 startingAtByteLocation:(unsigned long long)arg3 ofSummary:(id)arg4 account:(id)arg5 toFileHandle:(id)arg6 segmentCompletion:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (id)databasePathForSQLController:(id)arg1;
- (void)fetchAccountsAndSummariesFromSource:(id)arg1 forMigrator:(id)arg2 statistics:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)downloadFileFromSource:(id)arg1 forMigrator:(id)arg2 summary:(id)arg3 account:(id)arg4 segmentCompletion:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)downloadDataFromSource:(id)arg1 forMigrator:(id)arg2 summary:(id)arg3 account:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)importDataForMigrator:(id)arg1 fromProvider:(CDUnknownBlockType)arg2 forSummaries:(id)arg3 summaryStart:(CDUnknownBlockType)arg4 summaryCompletion:(CDUnknownBlockType)arg5;
- (void)updateSource:(id)arg1 withProgress:(double)arg2 completion:(CDUnknownBlockType)arg3;

@end

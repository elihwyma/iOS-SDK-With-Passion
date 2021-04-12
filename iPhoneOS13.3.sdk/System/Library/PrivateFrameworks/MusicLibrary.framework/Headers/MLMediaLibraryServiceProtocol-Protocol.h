//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ML3DatabaseImport, NSArray, NSDictionary, NSString, NSUUID;

@protocol MLMediaLibraryServiceProtocol <NSObject>
- (void)getMediaLibraryResourcesServiceListenerEndpointWithCompletion:(void (^)(NSXPCListenerEndpoint *, NSError *))arg1;
- (void)performMaintenanceTasksForDatabaseAtPath:(NSString *)arg1 withCompletionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)performRestoreOfLatestBackupForDatabaseAtPath:(NSString *)arg1 withCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)performBackupOfDatabaseAtPath:(NSString *)arg1 withCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)updateSpotlightIndexMetadataForItemsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2 withCompletion:(void (^)(BOOL, NSError *))arg3;
- (void)updateSpotlightIndexForBundleID:(NSString *)arg1 withCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)getLanguageResourcesWithCompletion:(void (^)(ML3LanguageResources *, NSError *))arg1;
- (void)unlockDatabaseWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)lockDatabaseForReason:(long long)arg1 withCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)cancelImportOperation:(NSUInteger)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)performImport:(ML3DatabaseImport *)arg1 fromSource:(NSUInteger)arg2 withUUID:(NSUUID *)arg3 completionHandler:(void (^)(BOOL, NSError *, NSData *))arg4;
- (void)setOptions:(NSDictionary *)arg1 withCompletionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)performDatabaseOperation:(NSUInteger)arg1 withAttributes:(NSDictionary *)arg2 options:(NSDictionary *)arg3 completionHandler:(void (^)(BOOL, NSError *))arg4;
- (void)endTransaction:(NSUUID *)arg1 shouldCommit:(BOOL)arg2 withCompletionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)executeQuery:(NSString *)arg1 withParameters:(NSArray *)arg2 options:(NSDictionary *)arg3 onTransaction:(NSUUID *)arg4 withCompletionHandler:(void (^)(NSData *, NSError *))arg5;
- (void)executeUpdate:(NSString *)arg1 withParameters:(NSArray *)arg2 onTransaction:(NSUUID *)arg3 withCompletionHandler:(void (^)(BOOL, NSError *))arg4;
- (void)beginTransactionForDatabaseAtPath:(NSString *)arg1 withPriorityLevel:(NSUInteger)arg2 options:(NSUInteger)arg3 completionHandler:(void (^)(NSUUID *, NSError *))arg4;
- (void)recreateDatabaseAtPath:(NSString *)arg1 withCompletionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)performDiagnosticWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;
- (void)checkIntegrityOfDatabaseAtPath:(NSString *)arg1 repairFaults:(BOOL)arg2 withCompletionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)attemptDatabaseFileRecoveryAtPath:(NSString *)arg1 withCompletionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)validateDatabaseAtPath:(NSString *)arg1 withCompletionHandler:(void (^)(BOOL, NSError *))arg2;
@end


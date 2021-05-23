/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, WBSCyclerBookmarkListRepresentation, WBSCyclerBookmarkOperationContext, WBSCyclerTestSuiteBookmarkAuxiliary;

@interface WBSCyclerBookmarksTestSuite : NSObject

{
    NSArray *_operations;
    NSArray *_relativeProbabilitiesForOperations;
    WBSCyclerBookmarkOperationContext *_operationContext;
    WBSCyclerTestSuiteBookmarkAuxiliary *_bookmarkAuxiliary;
    unsigned long long _iterationCount;
    WBSCyclerBookmarkListRepresentation *_expectedTopLevelBookmarksFromPreviousIteration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isFinished) _Bool finished;

+ (_Bool)setValue:(id)arg1 forConfigurationKey:(id)arg2;

- (id)init;
- (_Bool)canHandleRequest:(id)arg1;
- (void)tearDown;
- (void)setUp;
- (void)_validateServerBookmarksWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_errorWithCode:(long long)arg1 userInfo:(id)arg2;
- (void)_validateServerBookmarksAfterInitialSyncWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_validateServerBookmarksWithTarget:(id)arg1 initialBookmarks:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_validateServerBookmarksAfterClearingLocallyWithTarget:(id)arg1 initialBookmarks:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_performCloudKitSecondaryMigrationAfterClearingBookmarksWithTarget:(id)arg1 initialBookmarks:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_performFinalServerBookmarkValidationAfterClearingAndSyncingWithInitialBookmarks:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_descriptionForErrorCode:(long long)arg1;
- (void)runWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleRequest:(id)arg1 withTarget:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

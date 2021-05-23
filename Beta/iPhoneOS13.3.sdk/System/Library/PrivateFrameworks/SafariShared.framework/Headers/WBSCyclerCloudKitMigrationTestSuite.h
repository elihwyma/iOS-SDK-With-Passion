/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString, WBSCyclerBookmarkListRepresentation, WBSCyclerTestSuiteBookmarkAuxiliary;

@interface WBSCyclerCloudKitMigrationTestSuite : NSObject

{
    WBSCyclerTestSuiteBookmarkAuxiliary *_bookmarkAuxiliary;
    unsigned long long _bookmarksGeneratedPriorToMigration;
    WBSCyclerBookmarkListRepresentation *_topLevelBookmarksPriorToMigration;
    _Bool _hasValidatedResultsOfPrimaryMigration;
    _Bool _finished;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isFinished) _Bool finished;

+ (_Bool)setValue:(id)arg1 forConfigurationKey:(id)arg2;

- (id)init;
- (id)_descriptionForErrorCode:(long long)arg1;
- (void)runWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createRandomBookmarkWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_generateDAVServerIDsForExistingBookmarksWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_migrateToCloudKitWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_validateResultsOfMigrationWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchBookmarksPriorToMigrationWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_errorWithCode:(long long)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSSet;

@interface PLDelayedSaveActionsDetail : NSObject

{
    NSArray *_cloudFeedAlbumUpdates;
    NSArray *_cloudFeedAssetInserts;
    NSArray *_cloudFeedAssetUpdates;
    NSArray *_cloudFeedCommentInserts;
    NSArray *_cloudFeedInvitationRecordUpdates;
    NSArray *_cloudFeedDeletionEntries;
    NSArray *_momentInsertsAndUpdates;
    NSDictionary *_momentDeletes;
    NSArray *_updatedAssetIDsForHighlights;
    NSArray *_updatedMomentIDsForHighlights;
    NSArray *_dupeAnalysisNormalInserts;
    NSArray *_dupeAnalysisCloudInserts;
    NSArray *_assetsForFilesystemPersistency;
    NSDictionary *_searchIndexUpdates;
    NSSet *_albumCountsAndDateRangeUpdates;
    NSDictionary *_assetsForAnalysis;
}

@property (copy, nonatomic) NSArray *cloudFeedAlbumUpdates;
@property (copy, nonatomic) NSArray *cloudFeedAssetInserts;
@property (copy, nonatomic) NSArray *cloudFeedAssetUpdates;
@property (copy, nonatomic) NSArray *cloudFeedCommentInserts;
@property (copy, nonatomic) NSArray *cloudFeedInvitationRecordUpdates;
@property (copy, nonatomic) NSArray *cloudFeedDeletionEntries;
@property (copy, nonatomic) NSArray *momentInsertsAndUpdates;
@property (copy, nonatomic) NSDictionary *momentDeletes;
@property (copy, nonatomic) NSArray *updatedAssetIDsForHighlights;
@property (copy, nonatomic) NSArray *updatedMomentIDsForHighlights;
@property (nonatomic, readonly) _Bool shouldHandleMoments;
@property (copy, nonatomic) NSArray *dupeAnalysisNormalInserts;
@property (copy, nonatomic) NSArray *dupeAnalysisCloudInserts;
@property (copy, nonatomic) NSArray *assetsForFilesystemPersistency;
@property (copy, nonatomic) NSDictionary *searchIndexUpdates;
@property (copy, nonatomic) NSSet *albumCountsAndDateRangeUpdates;
@property (copy, nonatomic) NSDictionary *assetsForAnalysis;

+ (_Bool)supportsSecureCoding;
+ (id)_decodeMomentDeletes:(id)arg1 urlToObjectID:(CDUnknownBlockType)arg2;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_encodableMomentDeletes;

@end

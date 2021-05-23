/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, NSMutableDictionary, PLPhotoLibrary;

@protocol PXFeedSectionInfosManagerDelegate;

@interface PXFeedSectionInfosManager : NSObject

{
    PLPhotoLibrary *_photoLibrary;
    NSMutableArray *_sectionInfos;
    NSMutableDictionary *_sectionInfosByCloudFeedEntry;
    NSMutableArray *_pendingFeedEntriesChangeNotifications;
    NSMutableArray *_pendingCommentsChangeNotifications;
    NSMutableArray *_pendingAssetsChangeNotifications;
    long long _entryFilter;
    NSDate *_earliestDate;
    unsigned long long _fetchLimit;
    id <PXFeedSectionInfosManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <PXFeedSectionInfosManagerDelegate> delegate;
@property (nonatomic) long long entryFilter;
@property (retain, nonatomic) NSDate *earliestDate;
@property (nonatomic) unsigned long long fetchLimit;

+ (id)mostRecentCreationDate;

- (void)dealloc;
- (void)shouldReload:(id)arg1;
- (void)cloudFeedEntriesDidChange:(id)arg1;
- (void)cloudCommentsDidChange:(id)arg1;
- (void)assetsDidChange:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1 configurationBlock:(CDUnknownBlockType)arg2;
- (long long)numberOfSectionInfos;
- (_Bool)hasEnoughCloudFeedAssetEntriesToDisplay;
- (id)sectionInfoAtIndex:(long long)arg1;
- (id)sectionInfosAtIndexes:(id)arg1;
- (long long)indexOfSectionInfo:(id)arg1;
- (id)sectionInfoWithIdentifier:(id)arg1;
- (long long)indexOfSectionInfoForCloudFeedEntry:(id)arg1;
- (id)indexesOfUnloadedSectionInfosAtIndexes:(id)arg1;
- (void)loadSectionInfosAtIndexes:(id)arg1;
- (void)reconfigure:(CDUnknownBlockType)arg1;
- (_Bool)reconfigureToIncludeCloudFeedEntry:(id)arg1;
- (long long)numberOfInvitationsReceived;
- (id)indexesOfInvitationsReceivedSectionInfos;
- (void)_rebuildSectionInfos;
- (void)_getEarliestDate:(out id *)arg1 mostRecentEntries:(out id *)arg2 forBatchWithLatestDate:(id)arg3;
- (void)_didFinishPostingNotifications:(id)arg1;
- (_Bool)_shouldPerformFullReloadForFeedEntriesChangeNotifications:(id)arg1 commentsChangeNotifications:(id)arg2;
- (void)_updateSectionInfosForFeedEntriesChangeNotifications:(id)arg1 commentsChangeNotifications:(id)arg2 assetsChangeNotifications:(id)arg3;
- (CDUnknownBlockType)_sectionInfoSortingComparator;
- (id)initWithPhotoLibraryForTesting:(id)arg1 filter:(long long)arg2;

@end

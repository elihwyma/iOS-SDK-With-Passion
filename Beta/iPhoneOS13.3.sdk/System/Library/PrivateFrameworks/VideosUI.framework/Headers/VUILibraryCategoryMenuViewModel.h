/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString, VUICloudClient, VUIDownloadDataSource, VUIMediaEntitiesFetchController, VUIMediaLibrary, VUIMenuDataSource;

@protocol VUILibraryCategoryMenuViewModelDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryCategoryMenuViewModel : NSObject

{
    _Bool _hasMediaEntitiesFetchCompleted;
    _Bool _hasStartedFetch;
    _Bool _hasDownloadDataSourceFetchCompleted;
    id <VUILibraryCategoryMenuViewModelDelegate> _delegate;
    NSDictionary *_mediaEntitiesByCategoryType;
    NSDictionary *_mediaEntitiesByGenreIdentifier;
    NSDictionary *_artworkInfoDictionaryByPurchaseID;
    VUIMenuDataSource *_categories;
    VUIMediaLibrary *_mediaLibrary;
    NSArray *_homeShares;
    NSDictionary *_categoryTypeByFetchRequestIdentifier;
    VUIMediaEntitiesFetchController *_mediaEntitiesFetchController;
    NSArray *_categoryTypes;
    NSArray *_genreGroupings;
    NSSet *_validCategories;
    VUICloudClient *_cloudClient;
    VUIMediaEntitiesFetchController *_rentalsUpdateFetchController;
    VUIDownloadDataSource *_downloadDataSource;
}

@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary;
@property (retain, nonatomic) NSArray *homeShares;
@property (retain, nonatomic) NSDictionary *categoryTypeByFetchRequestIdentifier;
@property (retain, nonatomic) VUIMediaEntitiesFetchController *mediaEntitiesFetchController;
@property (retain, nonatomic) NSArray *categoryTypes;
@property (nonatomic) _Bool hasMediaEntitiesFetchCompleted;
@property (nonatomic) _Bool hasStartedFetch;
@property (retain, nonatomic) NSArray *genreGroupings;
@property (retain, nonatomic) NSSet *validCategories;
@property (retain, nonatomic) VUICloudClient *cloudClient;
@property (retain, nonatomic) VUIMediaEntitiesFetchController *rentalsUpdateFetchController;
@property (retain, nonatomic) VUIDownloadDataSource *downloadDataSource;
@property (nonatomic) _Bool hasDownloadDataSourceFetchCompleted;
@property (weak, nonatomic) id <VUILibraryCategoryMenuViewModelDelegate> delegate;
@property (retain, nonatomic) NSDictionary *mediaEntitiesByCategoryType;
@property (retain, nonatomic) NSDictionary *mediaEntitiesByGenreIdentifier;
@property (retain, nonatomic) NSDictionary *artworkInfoDictionaryByPurchaseID;
@property (retain, nonatomic) VUIMenuDataSource *categories;
@property (nonatomic, readonly) _Bool hasContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (id)_deviceMediaLibrary;
- (void)_addMediaLibraryNotificationObservers;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_loadMediaEntityShelves;
- (void)_updateRentalShelf;
- (void)_populateViewModel:(id)arg1;
- (void)_addNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)_homeShareMediaLibrariesDidChange:(id)arg1;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)arg1;
- (id)_constructCategoryList;
- (_Bool)_addOrRemoveDownloadCategoryIfNeeded;
- (id)_fetchRequestsWithMediaLibrary:(id)arg1 categoryTypeMap:(id *)arg2;
- (CDUnknownBlockType)_categoryTypesSortComparator;
- (id)_categoryTypesWithMediaEntitiesMap:(id)arg1 categoryTypeComparator:(CDUnknownBlockType)arg2;
- (void)downloadManager:(id)arg1 downloadedFetchDidFinishWithEntities:(id)arg2;
- (id)initWithMediaLibrary:(id)arg1 validCategories:(id)arg2;
- (void)startFetch;
- (void)updateRentalShelf;
- (void)_loadImageUrls:(id)arg1;

@end

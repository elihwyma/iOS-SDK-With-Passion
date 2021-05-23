/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXRecipientSearchDataSourceManager.h>

@class MFContactsSearchManager, NSArray, NSDictionary, NSMutableArray, NSNumber, NSObject, NSString, PXIDSAddressQueryController, PXMFRecipientSearchDataSource;

@protocol OS_dispatch_queue;

@interface PXMFRecipientSearchDataSourceManager : PXRecipientSearchDataSourceManager

{
    NSObject<OS_dispatch_queue> *_creationQueue;
    MFContactsSearchManager *_searchManager;
    NSNumber *_currentSearchTaskID;
    _Atomic unsigned int _currentAtomicSearchTaskID;
    NSMutableArray *_autocompleteSearchResults;
    NSDictionary *_searchResultsByDestination;
    PXIDSAddressQueryController *_addressQueryController;
    NSArray *__searchResults;
}

@property (nonatomic, readonly) PXMFRecipientSearchDataSource *dataSource;
@property (retain, nonatomic, setter=_setSearchResults:) NSArray *_searchResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)finishedSearchingForAutocompleteResults;
- (void)_createDataSource;
- (void)queryStringDidChange;
- (void)_handleAddressQueryResults:(id)arg1 error:(id)arg2;
- (void)_creationQueue_creatingRecipientSearchResultsForResults:(id)arg1 forSearchTaskID:(id)arg2;
- (void)_finishedCreatingRecipientSearchResults:(id)arg1 forSearchTaskID:(id)arg2;

@end

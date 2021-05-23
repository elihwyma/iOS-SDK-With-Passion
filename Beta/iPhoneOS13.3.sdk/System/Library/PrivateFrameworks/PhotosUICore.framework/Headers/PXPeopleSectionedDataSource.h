/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSString;

@protocol OS_dispatch_queue;

@interface PXPeopleSectionedDataSource : NSObject

{
    NSString *_localizedTitle;
    NSArray *_dataSources;
    NSObject<OS_dispatch_queue> *_reloadQueue;
    id _pauseToken;
    NSHashTable *_changeObservers;
}

@property (copy, nonatomic, readonly) NSArray *dataSources;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *reloadQueue;
@property (retain, nonatomic) id pauseToken;
@property (retain, nonatomic) NSHashTable *changeObservers;
@property (copy, nonatomic) NSString *localizedTitle;
@property (nonatomic, readonly) unsigned long long numberOfSections;
@property (nonatomic, readonly) unsigned long long numberOfDisclosedSections;
@property (nonatomic, readonly) unsigned long long totalPersonCount;
@property (copy, nonatomic, readonly) NSArray *allPersons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithSections:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)personAtIndexPath:(id)arg1;
- (void)cancelImageLoadingForItem:(id)arg1;
- (unsigned long long)numberOfPersonsInSection:(long long)arg1;
- (id)localizedTitleForSection:(long long)arg1;
- (id)localizedDisclosedTitleForSection:(long long)arg1;
- (_Bool)canReorderMembersInSection:(long long)arg1;
- (unsigned long long)fetchTypeForSection:(long long)arg1;
- (id)memberAtIndexPath:(id)arg1;
- (id)faceTileAtIndexPath:(id)arg1;
- (id)personsAtIndexPaths:(id)arg1;
- (id)personsForType:(long long)arg1;
- (id)titleAtIndexPath:(id)arg1;
- (unsigned long long)photoQuantityAtIndexPath:(id)arg1;
- (unsigned long long)numberOfPersonsWithContactName;
- (unsigned long long)numberOfPersonsWithStringName;
- (id)indexPathOfPerson:(id)arg1;
- (void)movePersonAtIndexPath:(id)arg1 toIndexPath:(id)arg2 shouldUpdateImmediately:(_Bool)arg3;
- (void)changePersonsAtIndexPaths:(id)arg1 toPersonType:(long long)arg2;
- (void)reloadFromDatabase;
- (void)addChangeObserver:(id)arg1;
- (void)removeChangeObserver:(id)arg1;
- (void)loadAndStartListeningToLibraryNotifications;
- (void)startListeningToLibraryNotifications;
- (void)stopListeningToLibraryNotifications;
- (void)pauseListeningForChangesWithTimeout:(double)arg1;
- (void)resumeListeningForChanges;
- (id)_generateChangeDetailsForChangeInstance:(id)arg1;
- (void)imageAtIndexPath:(id)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(CDUnknownBlockType)arg3 fastDisplayBlock:(CDUnknownBlockType)arg4;
- (void)addVisiblePerson:(id)arg1;
- (void)removeVisiblePerson:(id)arg1;
- (id)_dataSourceForFetchType:(unsigned long long)arg1;
- (id)_dataSourceForSection:(long long)arg1;
- (id)_dataSourceForIndexPath:(id)arg1;
- (long long)_sectionForFetchType:(unsigned long long)arg1;
- (unsigned long long)_fetchTypeForPersonType:(long long)arg1;

@end

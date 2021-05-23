/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXPeopleDataSource.h>

@class NSArray, NSObject, NSString, PXPeopleDetailsContext;

@protocol OS_dispatch_queue;

@interface PXPeopleWidgetDataSource : PXPeopleDataSource

{
    NSObject<OS_dispatch_queue> *_fetchQueue;
    _Bool _containsSocialGroups;
    _Bool _isForOneUp;
    _Bool _prefetchingStarted;
    PXPeopleDetailsContext *_context;
}

@property (nonatomic) _Bool prefetchingStarted;
@property (nonatomic) _Bool containsSocialGroups;
@property (nonatomic, readonly) NSArray *members;
@property (retain, nonatomic) PXPeopleDetailsContext *context;
@property (nonatomic) _Bool isForOneUp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)titleAtIndex:(unsigned long long)arg1;
- (void)startListeningForChanges;
- (void)photoLibraryDidChange:(id)arg1;
- (id)initWithName:(id)arg1 objectsReloadBlock:(CDUnknownBlockType)arg2;
- (void)stopListeningForChanges;
- (void)imageCacheDidChanged:(id)arg1;
- (void)prefetchThumbnailsForTargetSize:(struct CGSize)arg1 maxFetchCount:(unsigned long long)arg2;
- (void)_updateMembers;
- (void)loadMembersWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_socialGroupsForIdentifiers:(id)arg1;

@end

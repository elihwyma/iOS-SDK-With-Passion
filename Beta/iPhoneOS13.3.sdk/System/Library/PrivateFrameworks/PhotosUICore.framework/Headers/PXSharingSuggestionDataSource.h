/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXPeopleDataSource.h>

@class NSObject, NSString;

@protocol OS_dispatch_queue;

@interface PXSharingSuggestionDataSource : PXPeopleDataSource

{
    NSObject<OS_dispatch_queue> *_fetchQueue;
    _Bool _prefetchingStarted;
}

@property (nonatomic) _Bool prefetchingStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)titleAtIndex:(unsigned long long)arg1;
- (void)startListeningForChanges;
- (void)photoLibraryDidChange:(id)arg1;
- (void)setMembers:(id)arg1;
- (id)initWithName:(id)arg1 objectsReloadBlock:(CDUnknownBlockType)arg2;
- (void)stopListeningForChanges;
- (void)imageCacheDidChanged:(id)arg1;
- (void)prefetchThumbnailsForTargetSize:(struct CGSize)arg1 maxFetchCount:(unsigned long long)arg2;

@end

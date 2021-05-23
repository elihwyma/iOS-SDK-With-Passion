/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSPredicate, NSString, PHFetchResult;

@protocol OS_dispatch_queue, PXPeopleDataSourceDelegate;

@interface PXPeopleDataSource : NSObject

{
    _Bool _disclosed;
    _Bool _useAsynchronousLoad;
    NSString *_name;
    unsigned long long _maximumNumberOfMembers;
    id <PXPeopleDataSourceDelegate> _delegate;
    NSString *_localizedDisclosedTitle;
    NSString *_localizedUndisclosedTitle;
    NSPredicate *_filterPredicate;
    CDUnknownBlockType _sortComparator;
    NSArray *_members;
    NSObject<OS_dispatch_queue> *_reloadQueue;
    PHFetchResult *_objects;
    CDUnknownBlockType _reloadBlock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reloadQueue;
@property (nonatomic, readonly) _Bool useAsynchronousLoad;
@property (retain, nonatomic) PHFetchResult *objects;
@property (copy, nonatomic) CDUnknownBlockType reloadBlock;
@property (copy, nonatomic) NSArray *members;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) unsigned long long numberOfMembers;
@property (nonatomic) unsigned long long maximumNumberOfMembers;
@property (weak, nonatomic) id <PXPeopleDataSourceDelegate> delegate;
@property (copy) NSString *localizedDisclosedTitle;
@property (copy) NSString *localizedUndisclosedTitle;
@property (getter=isDisclosed) _Bool disclosed;
@property (copy, nonatomic) NSPredicate *filterPredicate;
@property (copy, nonatomic) CDUnknownBlockType sortComparator;
@property (nonatomic, readonly) NSArray *persons;

- (void)dealloc;
- (id)localizedTitle;
- (id)titleAtIndex:(unsigned long long)arg1;
- (void)startListeningForChanges;
- (id)initWithName:(id)arg1 objectsReloadBlock:(CDUnknownBlockType)arg2;
- (void)stopListeningForChanges;
- (id)initWithName:(id)arg1 objectsReloadBlock:(CDUnknownBlockType)arg2 asynchronousLoad:(_Bool)arg3 callbackDelegate:(id)arg4;
- (id)initWithName:(id)arg1 objects:(id)arg2;
- (id)memberAtIndex:(unsigned long long)arg1;
- (id)personAtIndex:(unsigned long long)arg1;
- (void)imageAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(CDUnknownBlockType)arg3 fastDisplayBlock:(CDUnknownBlockType)arg4;
- (void)imageAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)photoQuantityAtIndex:(unsigned long long)arg1;
- (CDUnknownBlockType)defaultComparator;
- (void)_setObjectsWithoutUpdate:(id)arg1;
- (void)loadObjectsAndUpdateMembersWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateMembers;
- (id)_itemsArrayFromObjects:(id)arg1;
- (void)_asyncLoadImageForItem:(id)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(CDUnknownBlockType)arg3 fastDisplayBlock:(CDUnknownBlockType)arg4;

@end

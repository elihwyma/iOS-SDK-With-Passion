/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXDataSectionManager.h>

@class NSOperationQueue, NSString, PHCollection, PHFetchResult;

@interface PXNavigationListItemDataSectionManager : PXDataSectionManager

{
    _Bool _enabled;
    _Bool _hiddenWhenEmpty;
    PHCollection *_collection;
    NSOperationQueue *_workQueue;
    PHFetchResult *_fetchResult;
}

@property (retain, nonatomic) PHFetchResult *fetchResult;
@property (nonatomic, readonly, getter=isCollectionEmpty) _Bool collectionEmpty;
@property (nonatomic, readonly, getter=isCollectionVisible) _Bool collectionVisible;
@property (nonatomic, readonly) PHCollection *collection;
@property (nonatomic, readonly) NSOperationQueue *workQueue;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, getter=isHiddenWhenEmpty) _Bool hiddenWhenEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)initWithChildDataSectionManagers:(id)arg1;
- (id)createDataSection;
- (void)collectionFetchOperationDidComplete:(id)arg1;
- (id)initWithCollection:(id)arg1 workQueue:(id)arg2;
- (void)updateDataSectionIfNecessary;

@end

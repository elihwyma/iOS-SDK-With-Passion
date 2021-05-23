/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PHFetchResult, PHPhotoLibrary;

@protocol OS_dispatch_queue, PXAssetCountObserverDelegate;

@interface PXAssetCountObserver : NSObject

{
    PHPhotoLibrary *_photoLibrary;
    unsigned long long _numberOfAssets;
    NSObject<OS_dispatch_queue> *_serialQueue;
    id <PXAssetCountObserverDelegate> _delegate;
    PHFetchResult *_fetchResult;
}

@property (retain, nonatomic) PHFetchResult *fetchResult;
@property (nonatomic) unsigned long long numberOfAssets;
@property (weak, nonatomic) id <PXAssetCountObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)_fetchOptions;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)initWithPhotoLibrary:(id)arg1 qosClass:(unsigned int)arg2;
- (void)observeReferencedAssets;
- (void)observeInternalFetchPredicate:(id)arg1;
- (void)_serialQueue_observeReferencedAssets;
- (void)_serialQueue_observeInternalFetchPredicate:(id)arg1;

@end

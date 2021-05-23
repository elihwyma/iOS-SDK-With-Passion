/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, PHPhotoLibrary, PXPlacesStore;

@protocol OS_dispatch_queue, PXPlacesGeotaggedItemDataSource;

@interface PXPlacesPhotoAssetsStore : NSObject

{
    _Bool _didInitiateLoad;
    _Bool _didCompleteLoad;
    NSArray *_fetchResults;
    PHPhotoLibrary *_photoLibrary;
    PXPlacesStore *_store;
    NSMutableArray *_completions;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (retain, nonatomic) NSArray *fetchResults;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) PXPlacesStore *store;
@property (nonatomic) _Bool didInitiateLoad;
@property (nonatomic) _Bool didCompleteLoad;
@property (retain, nonatomic) NSMutableArray *completions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) id <PXPlacesGeotaggedItemDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)photoLibraryDidChange:(id)arg1;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFetchResults:(id)arg1;
- (void)_handleAssetsImport;
- (void)_addItems:(id)arg1 intoStore:(id)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSObject, NSString, PXCuratedLibraryAssetsDataSourceManager;

@protocol OS_dispatch_queue, PXCuratedLibraryEventLogger;

@interface PXCuratedLibraryItemCountsController : PXObservable <Swift>

{
    NSObject<OS_dispatch_queue> *_prepareCountsQueue;
    _Bool _isCountingAssetTypes;
    _Bool _hasUsableCounts;
    _Bool _waitingToPrepare;
    PXCuratedLibraryAssetsDataSourceManager *_assetsDataSourceManager;
    id <PXCuratedLibraryEventLogger> _eventLogger;
    CDStruct_aa0b146f _counts;
}

@property (nonatomic) _Bool isCountingAssetTypes;
@property (nonatomic) _Bool hasUsableCounts;
@property (nonatomic) _Bool waitingToPrepare;
@property (nonatomic, readonly) PXCuratedLibraryAssetsDataSourceManager *assetsDataSourceManager;
@property (retain, nonatomic) id <PXCuratedLibraryEventLogger> eventLogger;
@property (nonatomic, readonly) CDStruct_aa0b146f counts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)initWithAssetsDataSourceManager:(id)arg1;
- (void)_updateCounts;
- (void)_updateEventLogging;
- (void)setCounts:(CDStruct_aa0b146f)arg1;
- (void)prepareCountsIfNeeded;
- (_Bool)_prepareCounts;
- (void)_handlePreparationCompletion;

@end

/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXMemoriesDataSourceManager.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXMemoriesFeedDataSource, PXMemoriesFeedWidgetDataSourceManager;

@interface PXFeedBasedMemoriesDataSourceManager : PXMemoriesDataSourceManager <Swift>

{
    PXMemoriesFeedWidgetDataSourceManager *_childDataSourceManager;
    PXMemoriesFeedDataSource *_childDataSource;
    struct _NSRange _dataSourceRange;
}

@property (nonatomic, readonly) PXMemoriesFeedWidgetDataSourceManager *childDataSourceManager;
@property (retain, nonatomic) PXMemoriesFeedDataSource *childDataSource;
@property (nonatomic, readonly) _Bool shouldHandleEntireDataSource;
@property (nonatomic) struct _NSRange dataSourceRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)createInitialDataSource;
- (void)updateCurrentMemoriesNonPendingAndNotificationStatus;
- (void)_handleDataSourceChange;
- (id)initWithMemoriesFeedWidgetDataSourceManager:(id)arg1;
- (id)_adjustDataSourceIfNeeded:(id)arg1;
- (id)_adjustChangeDetailsIfNeeded:(id)arg1 previousDataSource:(id)arg2 newDataSource:(id)arg3;
- (id)_adjustChangedIndexSetIfNeeded:(id)arg1;

@end

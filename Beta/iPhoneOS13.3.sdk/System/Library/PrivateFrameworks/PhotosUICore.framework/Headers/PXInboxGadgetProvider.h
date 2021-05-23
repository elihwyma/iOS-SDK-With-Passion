/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXInboxAggregateDataSourceManager;

@interface PXInboxGadgetProvider : PXGadgetProvider <Swift>

{
    PXInboxAggregateDataSourceManager *_dataSourceManager;
}

@property (nonatomic, readonly) PXInboxAggregateDataSourceManager *dataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)initWithDataSourceManager:(id)arg1;
- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void)_updateGadgets;
- (void)_lastExitedForYouDateDidChange:(id)arg1;
- (void)_updateDataSourceRangesOfCurrentGadgets;
- (void)_updateLastSeenDateOfCurrentGadgets;

@end

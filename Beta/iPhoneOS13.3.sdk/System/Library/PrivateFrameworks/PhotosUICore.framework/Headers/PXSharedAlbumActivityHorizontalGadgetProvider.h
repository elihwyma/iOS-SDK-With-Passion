/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSDate, NSString, PXFeedSectionInfosManager, PXInboxAggregateDataSourceManager;

@interface PXSharedAlbumActivityHorizontalGadgetProvider : PXGadgetProvider <Swift>

{
    PXFeedSectionInfosManager *_feedSectionInfosManager;
    PXInboxAggregateDataSourceManager *_inboxDataSourceManager;
    NSDate *_cachedPriorityDate;
}

@property (retain, nonatomic) PXFeedSectionInfosManager *feedSectionInfosManager;
@property (retain, nonatomic) PXInboxAggregateDataSourceManager *inboxDataSourceManager;
@property (retain, nonatomic) NSDate *cachedPriorityDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *priorityDate;
@property (nonatomic, readonly) long long defaultPriority;
@property (nonatomic, readonly) long long priorityType;
@property (nonatomic, readonly) unsigned long long gadgetType;

- (id)init;
- (void)dealloc;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (_Bool)supportsDynamicRanking;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)_gadgetTitle;
- (void)resetPriorityDate;
- (void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2;
- (void)_navigateToSharedAlbumActivityFeed:(id)arg1;
- (void)_updateGadgetTitle;
- (long long)_countOfSectionInfosToDisplay:(unsigned long long)arg1;
- (void)_updateGadgets;
- (id)_currentGadgetOfType:(unsigned long long)arg1;

@end

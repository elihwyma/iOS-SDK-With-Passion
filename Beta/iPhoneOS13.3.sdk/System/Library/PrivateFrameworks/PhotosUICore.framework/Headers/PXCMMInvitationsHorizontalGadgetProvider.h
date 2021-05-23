/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSDate, NSString, PXCMMInvitationsDataSourceManager;

@protocol PXCMMWorkflowPresenting;

@interface PXCMMInvitationsHorizontalGadgetProvider : PXGadgetProvider <Swift>

{
    PXCMMInvitationsDataSourceManager *_dataSourceManager;
    _Bool _didGenerateGadgets;
    id <PXCMMWorkflowPresenting> _workflowPresenter;
    NSDate *_cachedPriorityDate;
}

@property (retain, nonatomic) NSDate *cachedPriorityDate;
@property (nonatomic, readonly) id <PXCMMWorkflowPresenting> workflowPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *priorityDate;
@property (nonatomic, readonly) long long defaultPriority;
@property (nonatomic, readonly) long long priorityType;
@property (nonatomic, readonly) unsigned long long gadgetType;

- (id)init;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (_Bool)supportsDynamicRanking;
- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void)resetPriorityDate;
- (void)_updateGadgets;
- (id)initWithWorkflowPresenter:(id)arg1;
- (void)_configureDataSourceManager;

@end

/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSDate, NSString, PXMemoriesFeedWidgetDataSourceManager;

@interface PXForYouMemoryGadgetProvider : PXGadgetProvider <Swift>

{
    _Bool _hasGeneratedGadgets;
    PXMemoriesFeedWidgetDataSourceManager *_dataSourceManager;
    NSDate *_cachedPriorityDate;
}

@property (retain, nonatomic) PXMemoriesFeedWidgetDataSourceManager *dataSourceManager;
@property (nonatomic) _Bool hasGeneratedGadgets;
@property (retain, nonatomic) NSDate *cachedPriorityDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *priorityDate;
@property (nonatomic, readonly) long long defaultPriority;
@property (nonatomic, readonly) long long priorityType;
@property (nonatomic, readonly) unsigned long long gadgetType;

+ (unsigned long long)maxMemoriesToFetch;

- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (_Bool)supportsDynamicRanking;
- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void)resetPriorityDate;

@end

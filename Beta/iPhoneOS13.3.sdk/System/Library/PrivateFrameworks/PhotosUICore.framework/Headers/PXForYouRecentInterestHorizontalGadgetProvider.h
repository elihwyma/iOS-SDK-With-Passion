/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXHorizontalCollectionGadgetProvider.h>

@class NSDate;

@interface PXForYouRecentInterestHorizontalGadgetProvider : PXHorizontalCollectionGadgetProvider

{
    NSDate *_cachedPriorityDate;
}

@property (retain, nonatomic) NSDate *cachedPriorityDate;
@property (nonatomic, readonly) NSDate *priorityDate;
@property (nonatomic, readonly) long long defaultPriority;
@property (nonatomic, readonly) long long priorityType;
@property (nonatomic, readonly) unsigned long long gadgetType;

- (_Bool)supportsDynamicRanking;
- (void)resetPriorityDate;
- (id)initWithContentGadgetProviders:(id)arg1 title:(id)arg2;

@end

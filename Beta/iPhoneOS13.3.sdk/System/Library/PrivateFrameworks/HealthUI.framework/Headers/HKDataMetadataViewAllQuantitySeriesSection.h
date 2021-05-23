/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKDataMetadataSimpleSection.h>

@class HKSample, NSString;

@protocol HKDataMetadataViewControllerDelegate;

@interface HKDataMetadataViewAllQuantitySeriesSection : HKDataMetadataSimpleSection

{
    CDUnknownBlockType _reloadMetaDataVC;
    HKSample *_sample;
    id <HKDataMetadataViewControllerDelegate> _delegate;
}

@property (retain) HKSample *sample;
@property (weak, nonatomic) id <HKDataMetadataViewControllerDelegate> delegate;
@property (copy) CDUnknownBlockType reloadMetaDataVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)numberOfRowsInSection;
- (id)initWithSample:(id)arg1 delegate:(id)arg2;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (void)sampleDidChange:(id)arg1;
- (void)reloadSampleData;

@end

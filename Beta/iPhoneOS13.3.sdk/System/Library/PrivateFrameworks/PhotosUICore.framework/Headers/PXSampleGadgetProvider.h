/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetProvider.h>

@class NSArray;

@interface PXSampleGadgetProvider : PXGadgetProvider

{
    _Bool _includeHorizontal;
    _Bool _hasLoadedData;
    NSArray *_sampleGadgets;
    double _minimumHeight;
}

@property (retain, nonatomic) NSArray *sampleGadgets;
@property (nonatomic) double minimumHeight;
@property (nonatomic) _Bool hasLoadedData;
@property (nonatomic, readonly) _Bool includeHorizontal;

- (id)init;
- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)initWithMinimumHeight:(double)arg1;

@end

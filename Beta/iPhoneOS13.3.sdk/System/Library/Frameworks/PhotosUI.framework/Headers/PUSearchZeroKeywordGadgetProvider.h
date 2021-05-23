/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXGadgetProvider.h>

@class NSString, PUSearchZeroKeywordDataSource;

__attribute__((visibility("hidden")))
@interface PUSearchZeroKeywordGadgetProvider : PXGadgetProvider

{
    PUSearchZeroKeywordDataSource *_zeroKeywordDataSource;
}

@property (nonatomic, readonly) PUSearchZeroKeywordDataSource *zeroKeywordDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void)refreshData;
- (void)ppt_prepareZeroKeywordRequest:(CDUnknownBlockType)arg1;
- (void)didUpdateSections:(id)arg1;
- (_Bool)zeroKeywordsAvailable;

@end

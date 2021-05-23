/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetProvider.h>

@interface PXForYouFooterGadgetProvider : PXGadgetProvider

{
    _Bool _attemptedToGenerateGadgets;
    long long _footerState;
}

@property (nonatomic) long long footerState;
@property (nonatomic) _Bool attemptedToGenerateGadgets;

- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)_peaceMemoryFetchOptions;
- (_Bool)_didProcessContentOvernight;
- (void)_handleFaceProgressCompletionWithCountDictionary:(id)arg1;
- (void)_handleSceneProgressCompletionWithCount:(unsigned long long)arg1;
- (void)_generateFooterGadget;

@end

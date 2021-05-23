/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXGadgetProvider.h>

__attribute__((visibility("hidden")))
@interface PUSearchRecentSearchesGadgetProvider : PXGadgetProvider

- (id)init;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;

@end

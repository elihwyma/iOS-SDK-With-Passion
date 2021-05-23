/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetProvider.h>

@interface PXMessagesDebugGadgetProvider : PXGadgetProvider

+ (unsigned long long)_enabledDebugSectionsCount;

- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;

@end

/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXSectionedSelectionManager.h>

@class NSString;

@interface PXSectionedSelectionManager (PUOneUpSelectionIndicatorCompatibility)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)pu_isAssetReferenceSelected:(id)arg1;
- (void)pu_registerSelectionIndicatorObserver:(id)arg1;
- (void)pu_unregisterSelectionIndicatorObserver:(id)arg1;

@end

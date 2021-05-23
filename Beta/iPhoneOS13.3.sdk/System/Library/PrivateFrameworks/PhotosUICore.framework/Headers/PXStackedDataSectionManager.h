/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXDataSectionManager.h>

@interface PXStackedDataSectionManager : PXDataSectionManager

- (id)createDataSection;
- (id)childDataSectionManagerForObjectAtIndex:(long long)arg1 localIndex:(long long *)arg2;
- (id)changeDetailsForChildDataSectionManagersChangeDetails:(id)arg1;
- (id)changeDetailsForChangedChildDataSectionManager:(id)arg1 childChangeDetails:(id)arg2;

@end

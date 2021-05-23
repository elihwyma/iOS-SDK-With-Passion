/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXDataSectionManager.h>

@class NSDictionary;

@protocol PXOutlineDataSectionManagerDelegate;

@interface PXOutlineDataSectionManager : PXDataSectionManager

{
    NSDictionary *_dataSectionManagersByDataSectionObjects;
    id <PXOutlineDataSectionManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <PXOutlineDataSectionManagerDelegate> delegate;

- (id)createDataSection;
- (id)changeDetailsForChildDataSectionManagersChangeDetails:(id)arg1;
- (id)changeDetailsForChangedChildDataSectionManager:(id)arg1 childChangeDetails:(id)arg2;
- (id)_changeDetailsForNewDataSection;
- (id)childDataSectionManagerForOutlineObject:(id)arg1;
- (void)rearrangeSectionContent;

@end

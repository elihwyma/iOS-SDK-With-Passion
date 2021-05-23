/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXBarSpec.h>

@class NSDictionary, NSSet;

@interface PXPhotosDetailsBarSpec : PXBarSpec

{
    NSDictionary *_sortPriorityByBarItemIdentifierByPlacement;
    NSSet *_includedBarItemIdentifiers;
    _Bool _shouldPlaceEditActionsInToolbar;
    unsigned long long _detailsOptions;
}

@property (nonatomic) unsigned long long detailsOptions;

- (id)initWithExtendedTraitCollection:(id)arg1;
- (id)_sortPriorityForBarItem:(id)arg1 placement:(id)arg2;
- (id)_placementForBarItem:(id)arg1;
- (_Bool)_shouldIncludeItem:(id)arg1;
- (id)sortedBarItemsByPlacement:(id)arg1;

@end

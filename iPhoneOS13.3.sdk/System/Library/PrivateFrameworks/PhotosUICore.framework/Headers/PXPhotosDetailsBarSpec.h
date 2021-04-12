//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXBarSpec.h>

@class NSDictionary, NSSet;

@interface PXPhotosDetailsBarSpec : PXBarSpec
{
    NSDictionary *_sortPriorityByBarItemIdentifierByPlacement;
    NSSet *_includedBarItemIdentifiers;
    BOOL _shouldPlaceEditActionsInToolbar;
    NSUInteger _detailsOptions;
}

@property(nonatomic) NSUInteger detailsOptions; // @synthesize detailsOptions=_detailsOptions;
// - (void).cxx_destruct;
- (id)sortedBarItemsByPlacement:(id)arg1;
- (BOOL)_shouldIncludeItem:(id)arg1;
- (id)_placementForBarItem:(id)arg1;
- (id)_sortPriorityForBarItem:(id)arg1 placement:(id)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1;

@end


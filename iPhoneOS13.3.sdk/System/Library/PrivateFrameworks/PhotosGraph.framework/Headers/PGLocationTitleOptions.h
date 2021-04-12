//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, PGGraphAddressNode;

@interface PGLocationTitleOptions : NSObject
{
    BOOL _useCities;
    BOOL _showAllCities;
    BOOL _useTripTitleForLongDuration;
    BOOL _useBusinessItems;
    BOOL _useDistrict;
    BOOL _allowFamilyHome;
    NSSet *_momentNodes;
    PGGraphAddressNode *_keyAssetAddressNode;
    NSSet *_curationAddressNodes;
    NSUInteger _aoiDisplayType;
    NSUInteger _peopleDisplayType;
    NSUInteger _filterSignificantLocationsType;
    NSUInteger _lineBreakBehavior;
}

+ (id)onlyPeopleLocationTitleOptions;
@property(nonatomic) BOOL allowFamilyHome; // @synthesize allowFamilyHome=_allowFamilyHome;
@property(nonatomic) BOOL useDistrict; // @synthesize useDistrict=_useDistrict;
@property(nonatomic) BOOL useBusinessItems; // @synthesize useBusinessItems=_useBusinessItems;
@property(nonatomic) NSUInteger lineBreakBehavior; // @synthesize lineBreakBehavior=_lineBreakBehavior;
@property(nonatomic) NSUInteger filterSignificantLocationsType; // @synthesize filterSignificantLocationsType=_filterSignificantLocationsType;
@property(nonatomic) BOOL useTripTitleForLongDuration; // @synthesize useTripTitleForLongDuration=_useTripTitleForLongDuration;
@property(nonatomic) NSUInteger peopleDisplayType; // @synthesize peopleDisplayType=_peopleDisplayType;
@property(nonatomic) BOOL showAllCities; // @synthesize showAllCities=_showAllCities;
@property(nonatomic) BOOL useCities; // @synthesize useCities=_useCities;
@property(nonatomic) NSUInteger aoiDisplayType; // @synthesize aoiDisplayType=_aoiDisplayType;
@property(retain, nonatomic) NSSet *curationAddressNodes; // @synthesize curationAddressNodes=_curationAddressNodes;
@property(retain, nonatomic) PGGraphAddressNode *keyAssetAddressNode; // @synthesize keyAssetAddressNode=_keyAssetAddressNode;
@property(retain, nonatomic) NSSet *momentNodes; // @synthesize momentNodes=_momentNodes;
// - (void).cxx_destruct;
- (id)init;

@end


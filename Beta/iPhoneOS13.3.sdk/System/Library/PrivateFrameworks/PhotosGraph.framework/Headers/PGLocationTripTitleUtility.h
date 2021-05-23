/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet, NSString, PGIncompleteLocationResolver;

@interface PGLocationTripTitleUtility : NSObject

{
    _Bool _filterMomentsAndCities;
    _Bool _allowLongAOI;
    NSString *_title;
    NSSet *_usedLocationNodes;
    NSSet *_momentNodes;
    PGIncompleteLocationResolver *_incompleteLocationResolver;
    NSArray *_usedTitleComponents;
    unsigned long long _tripTitleType;
}

@property (retain, nonatomic) NSSet *momentNodes;
@property (nonatomic) _Bool filterMomentsAndCities;
@property (nonatomic) _Bool allowLongAOI;
@property (retain, nonatomic) PGIncompleteLocationResolver *incompleteLocationResolver;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSSet *usedLocationNodes;
@property (retain, nonatomic) NSArray *usedTitleComponents;
@property (nonatomic, readonly) unsigned long long tripTitleType;

+ (id)_locationTitleWithLocationNode:(id)arg1 addressNode:(id)arg2 countryNode:(id)arg3 allowSecondPart:(_Bool)arg4;
+ (void)_aoiTitleWithLocationNodes:(id)arg1 momentNodes:(id)arg2 allowLongAOI:(_Bool)arg3 result:(CDUnknownBlockType)arg4;
+ (id)_filteredCityNodesByNameForCityNodes:(id)arg1;
+ (_Bool)_visitedLocationNodeMoreThanOnce:(id)arg1 withReferenceMomentNodes:(id)arg2;
+ (void)_cityStateAndCountryNodesForLocationNodes:(id)arg1 result:(CDUnknownBlockType)arg2;

- (id)initWithMomentNodes:(id)arg1 filterMomentsAndCities:(_Bool)arg2;
- (id)initWithMomentNodes:(id)arg1 filterMomentsAndCities:(_Bool)arg2 allowLongAOI:(_Bool)arg3;
- (void)_generateLocationTitle;
- (void)_generateTitleForMoments:(id)arg1 resolvedMoments:(id)arg2 resolvedLocations:(id)arg3;
- (void)_resolveMomentNodes:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (id)_cityNodesFromMomentNodes:(id)arg1;
- (void)_cityTitleWithCityNode:(id)arg1 countryNode:(id)arg2 visitedCountryOnlyOnce:(_Bool)arg3 momentNodes:(id)arg4 result:(CDUnknownBlockType)arg5;
- (id)_bestAddressNodeForCityNodes:(id)arg1 inMomentNodes:(id)arg2;

@end

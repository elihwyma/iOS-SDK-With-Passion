/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface PGSpecialPOIResolver : NSObject

{
    NSArray *_momentNodes;
    NSMutableDictionary *_countBySpecialPOI;
}

@property (nonatomic, readonly) NSArray *momentNodes;
@property (retain, nonatomic) NSMutableDictionary *countBySpecialPOI;

+ (id)_nameBySpecialPOI;
+ (id)_regionsBySpecialPOI;
+ (_Bool)specialPOIContainsCoordinate:(struct CLLocationCoordinate2D)arg1;
+ (unsigned long long)specialPOIsContainingCoordinate:(struct CLLocationCoordinate2D)arg1;
+ (_Bool)specialPOINameIsInString:(id)arg1;
+ (unsigned long long)specialPOIsWithNameInString:(id)arg1;

- (id)initWithMomentNodes:(id)arg1;
- (_Bool)anyMomentContainsSpecialPOI:(unsigned long long)arg1;
- (_Bool)momentsContainSpecialPOI:(unsigned long long)arg1 withMomentRatio:(double)arg2;
- (unsigned long long)specialPOIsInAnyMoment;
- (unsigned long long)specialPOIsWithMomentRatio:(double)arg1;
- (_Bool)anyMomentHasPOIAmusementPark;
- (unsigned long long)_numberOfMomentsMatchingSpecialPOI:(unsigned long long)arg1;
- (unsigned long long)_numberOfMomentsInRegions:(id)arg1 containingAOIName:(id)arg2;

@end

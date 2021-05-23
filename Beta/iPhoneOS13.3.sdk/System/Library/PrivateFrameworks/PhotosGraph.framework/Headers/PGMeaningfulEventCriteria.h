/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class PGMeaningfulEventLocationMobilityTrait, PGMeaningfulEventLocationSetTrait, PGMeaningfulEventNumberTrait, PGMeaningfulEventPartOfDayTrait, PGMeaningfulEventSceneSetTrait, PGMeaningfulEventSetTrait;

@interface PGMeaningfulEventCriteria : NSObject

{
    _Bool _debug;
    PGMeaningfulEventSceneSetTrait *_scenesTrait;
    PGMeaningfulEventSetTrait *_roisTrait;
    PGMeaningfulEventSetTrait *_poisTrait;
    PGMeaningfulEventLocationSetTrait *_locationsTrait;
    PGMeaningfulEventSetTrait *_datesTrait;
    PGMeaningfulEventSetTrait *_peopleTrait;
    PGMeaningfulEventNumberTrait *_numberOfPeopleTrait;
    PGMeaningfulEventSetTrait *_socialGroupsTrait;
    PGMeaningfulEventNumberTrait *_minimumDurationTrait;
    PGMeaningfulEventNumberTrait *_maximumDurationTrait;
    PGMeaningfulEventPartOfDayTrait *_significantPartsOfDayTrait;
    PGMeaningfulEventPartOfDayTrait *_allPartsOfDayTrait;
    PGMeaningfulEventLocationMobilityTrait *_locationMobilityTrait;
    PGMeaningfulEventSetTrait *_publicEventCategoriesTrait;
}

@property (retain, nonatomic) PGMeaningfulEventSceneSetTrait *scenesTrait;
@property (retain, nonatomic) PGMeaningfulEventSetTrait *roisTrait;
@property (retain, nonatomic) PGMeaningfulEventSetTrait *poisTrait;
@property (retain, nonatomic) PGMeaningfulEventLocationSetTrait *locationsTrait;
@property (retain, nonatomic) PGMeaningfulEventSetTrait *datesTrait;
@property (retain, nonatomic) PGMeaningfulEventSetTrait *peopleTrait;
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *numberOfPeopleTrait;
@property (retain, nonatomic) PGMeaningfulEventSetTrait *socialGroupsTrait;
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *minimumDurationTrait;
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *maximumDurationTrait;
@property (retain, nonatomic) PGMeaningfulEventPartOfDayTrait *significantPartsOfDayTrait;
@property (retain, nonatomic) PGMeaningfulEventPartOfDayTrait *allPartsOfDayTrait;
@property (retain, nonatomic) PGMeaningfulEventLocationMobilityTrait *locationMobilityTrait;
@property (retain, nonatomic) PGMeaningfulEventSetTrait *publicEventCategoriesTrait;
@property (nonatomic, getter=isDebug) _Bool debug;

- (id)init;
- (id)_debugDescriptionWithMomentNode:(id)arg1;

@end

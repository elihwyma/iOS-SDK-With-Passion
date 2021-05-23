/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGMeaningfulEventCriteria.h>

@class NSDictionary, NSString, PGMeaningfulEventLocationMobilityTrait, PGMeaningfulEventLocationSetTrait, PGMeaningfulEventNumberTrait, PGMeaningfulEventPartOfDayTrait, PGMeaningfulEventSceneSetTrait, PGMeaningfulEventSetTrait;

@interface PGMeaningfulEventRequiredCriteria : PGMeaningfulEventCriteria

{
    _Bool _mustBeInteresting;
    NSString *_identifier;
    double _minimumScore;
    CDUnknownBlockType _completion;
    NSDictionary *_additionalInfo;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *meaningNodeLabel;
@property (nonatomic, readonly) double minimumScore;
@property (nonatomic) _Bool mustBeInteresting;
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
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (retain, nonatomic) NSDictionary *additionalInfo;

- (id)description;
- (id)debugDescription;
- (id)initWithIdentifier:(id)arg1 minimumScore:(double)arg2;

@end

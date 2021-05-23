/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class CLSInputPeopleClue, CLSMeaningClue, NSMapTable;

@interface CLSClueCollection : NSObject

{
    unsigned long long _versionCount;
    struct os_unfair_recursive_lock_s _recursiveLock;
    CLSInputPeopleClue *_mePersonClue;
    NSMapTable *_inputCluesByKey;
    NSMapTable *_outputCluesByKey;
    NSMapTable *_meaningCluesByKey;
}

@property (retain, nonatomic) CLSInputPeopleClue *mePersonClue;
@property (readonly) unsigned long long versionCount;
@property (readonly) CLSMeaningClue *locationMobilityClue;

- (id)init;
- (id)description;
- (double)timeInterval;
- (long long)year;
- (id)locations;
- (id)localStartDate;
- (id)localEndDate;
- (id)universalDates;
- (id)peopleNames;
- (id)universalStartDate;
- (id)universalEndDate;
- (id)mePerson;
- (void)prepareWithProgressBlock:(CDUnknownBlockType)arg1;
- (void)_incrementVersionCount;
- (id)localDates;
- (unsigned long long)numberOfDays;
- (id)inputCluesForKey:(id)arg1;
- (id)inputClues;
- (id)uniqueInputClues;
- (id)outputCluesForKey:(id)arg1;
- (id)uniqueOutputCluesForKey:(id)arg1;
- (id)outputCluesForKey:(id)arg1 andValue:(id)arg2;
- (id)uniqueOutputClueForKey:(id)arg1 andValue:(id)arg2;
- (id)uniqueOutputClues;
- (id)outputClues;
- (_Bool)hasOutputClueWithKey:(id)arg1 andValue:(id)arg2;
- (_Bool)hasOutputClueWithKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3;
- (id)outputClueRelatedPeopleForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3;
- (id)outputClueRelatedEventsForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3;
- (id)outputClueRelatedPlacesForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3;
- (id)meaningClues;
- (id)uniqueMeaningClues;
- (id)meaningCluesForKey:(id)arg1;
- (id)uniqueMeaningCluesForKey:(id)arg1;
- (id)meaningCluesForKey:(id)arg1 andValue:(id)arg2;
- (id)uniqueMeaningClueForKey:(id)arg1 andValue:(id)arg2;
- (_Bool)hasMeaningClueWithKey:(id)arg1 andValue:(id)arg2;
- (_Bool)hasMeaningClueWithKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3;
- (void)enumerateTimeOfDayClues:(CDUnknownBlockType)arg1;
- (void)enumerateTimeClues:(CDUnknownBlockType)arg1;
- (unsigned long long)numberOfTimes;
- (void)enumerateLocationClues:(CDUnknownBlockType)arg1;
- (id)locationPlacemarks;
- (id)locationRegions;
- (id)locationRegionsInPlacemarks;
- (unsigned long long)numberOfLocations;
- (void)enumeratePeopleClues:(CDUnknownBlockType)arg1;
- (unsigned long long)numberOfPersons;
- (void)_mergeInputClue:(id)arg1;
- (void)_mergeOutputClue:(id)arg1;
- (void)_mergeMeaningClue:(id)arg1;
- (void)mergeClues:(id)arg1;
- (id)peopleDescription;
- (id)peopleDescriptionWithoutPeople:(id)arg1;

@end

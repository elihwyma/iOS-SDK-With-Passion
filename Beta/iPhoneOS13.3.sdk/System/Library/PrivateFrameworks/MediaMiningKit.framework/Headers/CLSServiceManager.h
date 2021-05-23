/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class CLSLRUMemoryCache, CLSPerson, CLSRoutineService, CLSSocialServiceCalendar, CLSSocialServiceContacts, CLSSocialServiceCoreDuet, CLSSocialServiceCoreNameParser, NSDateInterval, NSString, NSURL;

@interface CLSServiceManager : NSObject

{
    CLSLRUMemoryCache *_personsCache;
    CLSRoutineService *_routineService;
    CLSSocialServiceContacts *_contactsService;
    CLSSocialServiceCalendar *_calendarService;
    CLSSocialServiceCoreDuet *_coreDuetService;
    CLSSocialServiceCoreNameParser *_coreNameParserService;
    CLSPerson *_mePerson;
    NSObject *_routineServiceLockObject;
    NSDateInterval *_validDateInterval;
    NSURL *_applicationDataURL;
}

@property (nonatomic, readonly) CLSSocialServiceContacts *contactsService;
@property (nonatomic, readonly) CLSSocialServiceCoreDuet *coreDuetService;
@property (nonatomic, readonly) CLSSocialServiceCalendar *calendarService;
@property (nonatomic, readonly) CLSSocialServiceCoreNameParser *coreNameParserService;
@property (nonatomic, readonly) NSObject *routineServiceLockObject;
@property (retain, nonatomic) CLSPerson *mePerson;
@property (nonatomic, readonly) CLSRoutineService *routineService;
@property (nonatomic, readonly) NSURL *applicationDataURL;
@property (retain, nonatomic) NSDateInterval *validDateInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;
+ (id)sharedManagerWithURL:(id)arg1;

- (id)init;
- (id)initWithURL:(id)arg1;
- (id)contactsForIdentifiers:(id)arg1;
- (_Bool)routineIsAvailable;
- (id)locationOfInterestAtLocation:(id)arg1;
- (unsigned long long)numberOfLocationsOfInterest;
- (id)lastLocationOfInterestVisit;
- (void)postProcessLocationsOfInterest;
- (id)locationOfInterestCloseToLocation:(id)arg1 inDateInterval:(id)arg2;
- (_Bool)isRemoteLocation:(id)arg1 inDateInterval:(id)arg2;
- (void)flushSocialServicesAtURL:(id)arg1;
- (void)enumerateAllPersonsUsingBlock:(CDUnknownBlockType)arg1;
- (id)coreDuetPersonSuggestionsOnDate:(id)arg1;
- (id)personLocalIdentifierMatchingContactPictureForContactIdentifier:(id)arg1 usingPersonsModel:(id)arg2;
- (id)personForIdentifier:(id)arg1;
- (id)contactHistoryCollector;
- (id)eventsForDates:(id)arg1;
- (void)prefetchEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 forAssetCollectionsSortedByStartDate:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)eventsForClueCollection:(id)arg1;
- (id)workCalendarEventsMatchingContactIdentifiers:(id)arg1 fromUniversalDate:(id)arg2 toUniversalDate:(id)arg3;
- (id)personsFromEventParticipants:(id)arg1 excludeCurrentUser:(_Bool)arg2;
- (_Bool)hasAddressesForMePerson;
- (id)mePersonAddressesOfType:(unsigned long long)arg1;
- (void)invalidatePermanentMemoryCaches;
- (void)invalidateMomentaryMemoryCaches;
- (void)invalidatePersonsCacheForPersonsWithNames:(id)arg1;
- (id)personResultForName:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)personResultsForName:(id)arg1 inPhotoLibrary:(id)arg2;
- (void)enumerateHomeAddressesForPersonWithContactIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePersonsAndHomeAddressUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePersonsAndBirthdayDateUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePersonsAndRelationshipUsingBlock:(CDUnknownBlockType)arg1;
- (id)cachedPersonLocalIdentifierMatchingContactPictureForContactIdentifier:(id)arg1;
- (id)personForPersonHandle:(id)arg1;
- (void)enumeratePersonsForFullname:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePersonsAndPotentialBirthdayDateForContactIdentifiers:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)matchingDictionaryForContactIdentifier:(id)arg1;
- (id)fetchLocationOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)predominantLocationMobilityForDateInterval:(id)arg1 confidence:(double *)arg2;
- (id)fetchImportantLocationsOfInterest;
- (void)enumeratePersonsForIdentifiers:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)genderHintForPerson:(id)arg1 usingLocales:(id)arg2;
- (unsigned long long)relationshipHintForPerson:(id)arg1 usingLocales:(id)arg2;
- (unsigned long long)numberOfVisits;
- (unsigned long long)numberOfTimeMatches;
- (unsigned long long)numberOfCloseByLocationMatches;
- (unsigned long long)numberOfRemoteLocationMatches;
- (unsigned long long)numberOfMatchRequests;
- (double)pinningVisitsRatio;

@end

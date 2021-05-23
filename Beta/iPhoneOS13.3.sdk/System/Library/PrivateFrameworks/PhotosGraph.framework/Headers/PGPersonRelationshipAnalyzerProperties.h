/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@interface PGPersonRelationshipAnalyzerProperties : NSObject

{
    _Bool _hasParentContactName;
    _Bool _hasSameFamilyNameAsMePerson;
    _Bool _hasAnniversaryDate;
    _Bool _isTopTwoPersonSocialGroup;
    _Bool _isTopPerson;
    _Bool _personAgeDifferentThanMeNode;
    _Bool _personOldEnoughToBeMeNodeParentOrGrandparent;
    _Bool _personYoungEnoughToBeMeNodeChild;
    double _oneOnOneTripAttendanceRatio;
    double _tripAttendanceRatio;
    double _familyHolidayAttendanceRatio;
    unsigned long long _numberOfMomentsAtHome;
    unsigned long long _numberOfLoveEmojisExchanged;
    double _friendNightOutAttendanceRatio;
    double _weekendAppearanceRatio;
    double _calendarEventAttendanceRatio;
    double _momentsAtWorkAppearancesRatio;
    double _partnerScore;
    double _familyScore;
    double _parentScore;
    double _friendScore;
    double _coworkerScore;
    double _childScore;
}

@property (nonatomic) double familyHolidayAttendanceRatio;
@property (nonatomic) _Bool hasParentContactName;
@property (nonatomic) _Bool hasSameFamilyNameAsMePerson;
@property (nonatomic) unsigned long long numberOfMomentsAtHome;
@property (nonatomic) _Bool hasAnniversaryDate;
@property (nonatomic) _Bool isTopTwoPersonSocialGroup;
@property (nonatomic) unsigned long long numberOfLoveEmojisExchanged;
@property (nonatomic) _Bool isTopPerson;
@property (nonatomic) double friendNightOutAttendanceRatio;
@property (nonatomic) double oneOnOneTripAttendanceRatio;
@property (nonatomic) double tripAttendanceRatio;
@property (nonatomic) double weekendAppearanceRatio;
@property (nonatomic) double calendarEventAttendanceRatio;
@property (nonatomic) double momentsAtWorkAppearancesRatio;
@property (nonatomic) _Bool personAgeDifferentThanMeNode;
@property (nonatomic) _Bool personOldEnoughToBeMeNodeParentOrGrandparent;
@property (nonatomic) _Bool personYoungEnoughToBeMeNodeChild;
@property (nonatomic, readonly) double partnerScore;
@property (nonatomic, readonly) double familyScore;
@property (nonatomic, readonly) double parentScore;
@property (nonatomic, readonly) double childScore;
@property (nonatomic, readonly) double friendScore;
@property (nonatomic, readonly) double coworkerScore;

- (id)description;
- (id)edgeProperties;
- (void)registerAttendance:(unsigned long long)arg1 amongFamilyHolidays:(unsigned long long)arg2;
- (void)registerParentContactName;
- (void)registerSameFamilyNameAsMePerson;
- (void)registerNumberOfMomentsAtHome:(unsigned long long)arg1 amongMomentsAtHome:(unsigned long long)arg2;
- (void)registerAnniversaryDate;
- (void)registerTopTwoPersonSocialGroup;
- (void)registerNumberOfExchangedLoveEmojis:(unsigned long long)arg1 amongExchangedLoveEmojis:(unsigned long long)arg2;
- (void)registerTopPersonAmongTopPeople:(unsigned long long)arg1;
- (void)registerNumberOfNightsOut:(unsigned long long)arg1 amongNightsOut:(unsigned long long)arg2;
- (void)registerOneOnOneTripAppearance:(unsigned long long)arg1 amongOneOnOneTrips:(unsigned long long)arg2;
- (void)registerNumberOfTrips:(unsigned long long)arg1 withTripsScore:(double)arg2 amongTrips:(unsigned long long)arg3;
- (void)registerNumberOfWeekendMoments:(unsigned long long)arg1 amongWeekends:(unsigned long long)arg2;
- (void)registerAttendance:(unsigned long long)arg1 amongWorkCalendarEvents:(unsigned long long)arg2;
- (void)registerNumberOfMomentsAtWork:(unsigned long long)arg1 amongMomentsAtWork:(unsigned long long)arg2;
- (void)registerPersonOldEnoughToBeMeNodeParentOrMyGrandparent;
- (void)penalizePersonAgeCategoryDifferentThanMeNode;
- (void)registerPersonYoungEnoughToBeMeNodeChild;

@end

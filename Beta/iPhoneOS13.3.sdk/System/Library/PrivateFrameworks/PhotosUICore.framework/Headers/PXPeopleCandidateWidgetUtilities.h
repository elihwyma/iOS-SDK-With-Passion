/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXPeopleCandidateWidgetUtilities : NSObject

+ (id)_tomorrow;
+ (id)insertPerson:(id)arg1 forDaysDictionary:(id)arg2;
+ (_Bool)shouldFetchCandidatesForPerson:(id)arg1 forDaysDictionary:(id)arg2;
+ (id)removeAllPreviousNotNowPersonsIfNeededForDaysDictionary:(id)arg1;
+ (id)_dateKeyForToday;
+ (id)_dateKeyForTomorrow;
+ (id)_dateKeyForDay:(id)arg1;
+ (id)_localTimeZoneFormatStringForDate:(id)arg1;
+ (_Bool)_pastMidnightBufferThreshold;

@end

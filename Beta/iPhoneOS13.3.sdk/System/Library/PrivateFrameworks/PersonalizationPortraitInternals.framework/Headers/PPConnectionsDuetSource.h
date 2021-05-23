/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <PersonalizationPortraitInternals/PPConnectionsSource.h>

@class NSString;

@interface PPConnectionsDuetSource : PPConnectionsSource

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)identifier;
+ (id)duetUserActivitiesFromStreams:(id)arg1 limit:(unsigned long long)arg2 afterDate:(id)arg3 explanationSet:(id)arg4;

- (id)whitespaceAndNewlineCharacterSet;
- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(id)arg6;
- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 duetLimit:(long long)arg5 consumer:(unsigned long long)arg6 richLocationItems:(_Bool)arg7 resolveEKLocations:(_Bool)arg8 explanationSet:(id)arg9;
- (id)supportedLocationFields;
- (_Bool)isEligibleForPredictions:(id)arg1;
- (_Bool)isDuetEventAuthorized:(id)arg1 bundleID:(id)arg2;
- (id)duetLocationUserActivitiesWithLimit:(unsigned long long)arg1 explanationSet:(id)arg2;
- (id)duetLocationUserActivitiesWithLimit:(unsigned long long)arg1 afterDate:(id)arg2 explanationSet:(id)arg3;

@end

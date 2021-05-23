/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface _ATXActionUtils : NSObject

+ (id)slotSetsForAction:(id)arg1;
+ (id)_extractValueInKeyValueBlob:(id)arg1 withKey:(id)arg2;
+ (id)getBundleIdAndActionTypeFromActionKey:(id)arg1;
+ (id)getActivityTypeFromNSUAType:(id)arg1;
+ (_Bool)isNSUAType:(id)arg1;
+ (id)getBundleIdFromActionKey:(id)arg1;
+ (id)getActionTypeFromActionKey:(id)arg1;
+ (id)getActionTypesFromActionKeys:(id)arg1;
+ (_Bool)isActionKey:(id)arg1;
+ (id)getBundleIdsFromActionKeys:(id)arg1;
+ (id)slotSetFromAction:(id)arg1;
+ (id)limitParameterCombinations:(id)arg1 limit:(int)arg2;
+ (id)filterContainersWithNilAction:(id)arg1;
+ (void)fetchDataAndUpdateContentAttributeSetForAction:(id)arg1;
+ (CDUnknownBlockType)actionKeyFilterForCandidateBundleIds:(id)arg1 candidateActionTypes:(id)arg2 blacklist:(id)arg3;
+ (void)prefillActionHistograms;
+ (void)prefillActionSlotDatabase;
+ (id)firstIntent:(id)arg1 inAppLaunchSession:(id)arg2;
+ (void)resetActionPredictions;
+ (id)swapUserActivityString:(id)arg1 withActionKey:(id)arg2 withNewTitle:(id)arg3 withNewDateString:(id)arg4;
+ (id)markTodayInTitleAndUserActivityString:(id)arg1 withActionKey:(id)arg2;
+ (id)timeOfDayAndDayOfWeekForDate:(id)arg1 timeZone:(id)arg2;
+ (id)stringForTimeOfDayAndDayOfWeek:(id)arg1 timeZone:(id)arg2;
+ (id)stringForSpecificTimeDOWLocation:(id)arg1 timeZone:(id)arg2 location:(id)arg3 locationEnabled:(_Bool)arg4;
+ (id)stringForCoarseTimePOWLocation:(id)arg1 timeZone:(id)arg2 location:(id)arg3 locationEnabled:(_Bool)arg4;
+ (_Bool)uniqueRecipientsMatchedBetweenIntent:(id)arg1 andIntent:(id)arg2;
+ (id)filterDuplicateActionPredictions:(id)arg1;
+ (id)filterDuplicateTVActionPredictions:(id)arg1;
+ (_Bool)isTitleEquivalenceBetweenAction:(id)arg1 other:(id)arg2;
+ (_Bool)isCallIntentEquivalenceBetweenAction:(id)arg1 other:(id)arg2;
+ (_Bool)isContainmentBetweenAction:(id)arg1 other:(id)arg2;
+ (id)_contactIdentifiersReferencedByAction:(id)arg1;
+ (_Bool)isBlockedPhoneNumberContainedInNumbers:(id)arg1;
+ (_Bool)isBlockedEmailAddressContainedInAddresses:(id)arg1;
+ (id)filterMissingOrBlockedRecipientPredictions:(id)arg1;
+ (id)filterRecentlyDeletedNotePredictions:(id)arg1;
+ (id)filterAlarmsThatDoNotToggleOnAnExistingDisabledAlarm:(id)arg1;
+ (id)sha256hex:(id)arg1;
+ (double)calculateWeightWith:(unsigned long long)arg1 strength:(double)arg2 termFreq:(unsigned long long)arg3 docFreq:(unsigned long long)arg4 docLength:(unsigned long long)arg5;
+ (_Bool)shouldPredictRecipient:(id)arg1 withDate:(id)arg2 andRecipientDate:(id)arg3;
+ (_Bool)shouldAcceptMessageContent:(id)arg1;
+ (id)recipientFromMessageIntent:(id)arg1;
+ (id)partOfWeekStringForDate:(id)arg1;
+ (_Bool)isINStartCallIntentSupportedForAction:(id)arg1;
+ (_Bool)shouldAcceptAudioOrVideoCallIntent:(id)arg1;

@end

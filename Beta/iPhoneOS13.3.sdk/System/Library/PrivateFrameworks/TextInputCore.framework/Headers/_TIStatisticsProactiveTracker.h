/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class PETDistributionEventTracker, PETScalarEventTracker, TIAutocorrectionList, TIKeyboardCandidate;

@interface _TIStatisticsProactiveTracker : NSObject

{
    PETScalarEventTracker *_failureEventDescriptionTracker;
    PETScalarEventTracker *_triggeredEventTracker;
    PETScalarEventTracker *_triggeredCategoryEventTracker;
    PETScalarEventTracker *_suggestedEventTracker;
    PETScalarEventTracker *_suggestedCategoryEventTracker;
    PETScalarEventTracker *_failureEventTracker;
    PETScalarEventTracker *_failureCategoryEventTracker;
    PETScalarEventTracker *_failureCategoryEventDescriptionTracker;
    PETScalarEventTracker *_selectedEventTracker;
    PETScalarEventTracker *_selectedCategoryEventTracker;
    PETDistributionEventTracker *_timeInPredictionBarEventTracker;
    PETDistributionEventTracker *_timeInPredictionBarCategoryEventTracker;
    PETScalarEventTracker *_engagementEventDescriptionTracker;
    PETScalarEventTracker *_engagementCategoryEventDescriptionTracker;
    PETScalarEventTracker *_personalizationWordAcceptanceTracker;
    PETScalarEventTracker *_personalizationOfferTracker;
    PETScalarEventTracker *_personalizationEngagementTracker;
    TIAutocorrectionList *_lastAutocorrectionList;
    TIKeyboardCandidate *_responseKitEntryOffered;
}

@property (retain, nonatomic) PETScalarEventTracker *failureEventDescriptionTracker;
@property (retain, nonatomic) PETScalarEventTracker *triggeredEventTracker;
@property (retain, nonatomic) PETScalarEventTracker *triggeredCategoryEventTracker;
@property (retain, nonatomic) PETScalarEventTracker *suggestedEventTracker;
@property (retain, nonatomic) PETScalarEventTracker *suggestedCategoryEventTracker;
@property (retain, nonatomic) PETScalarEventTracker *failureEventTracker;
@property (retain, nonatomic) PETScalarEventTracker *failureCategoryEventTracker;
@property (retain, nonatomic) PETScalarEventTracker *failureCategoryEventDescriptionTracker;
@property (retain, nonatomic) PETScalarEventTracker *selectedEventTracker;
@property (retain, nonatomic) PETScalarEventTracker *selectedCategoryEventTracker;
@property (retain, nonatomic) PETDistributionEventTracker *timeInPredictionBarEventTracker;
@property (retain, nonatomic) PETDistributionEventTracker *timeInPredictionBarCategoryEventTracker;
@property (retain, nonatomic) PETScalarEventTracker *engagementEventDescriptionTracker;
@property (retain, nonatomic) PETScalarEventTracker *engagementCategoryEventDescriptionTracker;
@property (retain, nonatomic) PETScalarEventTracker *personalizationWordAcceptanceTracker;
@property (retain, nonatomic) PETScalarEventTracker *personalizationOfferTracker;
@property (retain, nonatomic) PETScalarEventTracker *personalizationEngagementTracker;
@property (retain, nonatomic) TIAutocorrectionList *lastAutocorrectionList;
@property (retain, nonatomic) TIKeyboardCandidate *responseKitEntryOffered;

+ (id)sharedInstance;

- (id)init;
- (void)trackTriggeredWithSource:(unsigned char)arg1 categories:(id)arg2 locale:(id)arg3 fieldType:(id)arg4;
- (void)trackFailureWithDescription:(unsigned char)arg1 description:(id)arg2 categories:(id)arg3 locale:(id)arg4 fieldType:(id)arg5;
- (void)trackSuggestedWithSource:(unsigned char)arg1 count:(unsigned long long)arg2 categories:(id)arg3 locale:(id)arg4 fieldType:(id)arg5;
- (void)trackFailureWithSource:(unsigned char)arg1 reason:(unsigned char)arg2 categories:(id)arg3 locale:(id)arg4 fieldType:(id)arg5;
- (void)trackSelectedWithSource:(unsigned char)arg1 position:(unsigned long long)arg2 categories:(id)arg3 locale:(id)arg4 fieldType:(id)arg5;
- (void)trackPredictionTimeWithSource:(unsigned char)arg1 time:(double)arg2 selected:(_Bool)arg3 categories:(id)arg4 locale:(id)arg5 fieldType:(id)arg6;
- (void)trackEngagementFailureWithDescription:(unsigned char)arg1 description:(id)arg2 categories:(id)arg3 locale:(id)arg4 fieldType:(id)arg5;

@end

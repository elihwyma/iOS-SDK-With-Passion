//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETGoalConversionEventTracker, PETScalarEventTracker;

@interface TIConnectionsMetricsTracker : NSObject
{
    BOOL _inputContextDidChange;
    PETScalarEventTracker *_textFieldEntryTracker;
    PETGoalConversionEventTracker *_predictionEngagementTracker;
}

+ (id)sharedInstance;
@property(retain, nonatomic) PETGoalConversionEventTracker *predictionEngagementTracker; // @synthesize predictionEngagementTracker=_predictionEngagementTracker;
@property(retain, nonatomic) PETScalarEventTracker *textFieldEntryTracker; // @synthesize textFieldEntryTracker=_textFieldEntryTracker;
@property BOOL inputContextDidChange; // @synthesize inputContextDidChange=_inputContextDidChange;
// - (void).cxx_destruct;
- (void)trackPredictionEngagmentWithConversion:(BOOL)arg1 age:(NSUInteger)arg2 fieldType:(id)arg3 resultType:(id)arg4 fromBundleId:(id)arg5 targetApp:(id)arg6 linguistic:(BOOL)arg7 semantic:(BOOL)arg8;
- (void)trackTextFieldEntryWithEmpty:(BOOL)arg1 fieldType:(id)arg2 trigger:(id)arg3;
- (void)trackTextFieldEntryWithEmpty:(BOOL)arg1 fieldType:(id)arg2 linguistic:(BOOL)arg3 semantic:(BOOL)arg4 requestType:(id)arg5;
- (BOOL)isIgnoredTrigger:(id)arg1;
- (id)init;

@end


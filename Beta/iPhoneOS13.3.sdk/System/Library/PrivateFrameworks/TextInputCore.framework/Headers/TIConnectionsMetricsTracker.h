/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class PETGoalConversionEventTracker, PETScalarEventTracker;

@interface TIConnectionsMetricsTracker : NSObject

{
    _Bool _inputContextDidChange;
    PETScalarEventTracker *_textFieldEntryTracker;
    PETGoalConversionEventTracker *_predictionEngagementTracker;
}

@property (retain, nonatomic) PETScalarEventTracker *textFieldEntryTracker;
@property (retain, nonatomic) PETGoalConversionEventTracker *predictionEngagementTracker;
@property _Bool inputContextDidChange;

+ (id)sharedInstance;

- (id)init;
- (_Bool)isIgnoredTrigger:(id)arg1;
- (void)trackTextFieldEntryWithEmpty:(_Bool)arg1 fieldType:(id)arg2 linguistic:(_Bool)arg3 semantic:(_Bool)arg4 requestType:(id)arg5;
- (void)trackTextFieldEntryWithEmpty:(_Bool)arg1 fieldType:(id)arg2 trigger:(id)arg3;
- (void)trackPredictionEngagmentWithConversion:(_Bool)arg1 age:(unsigned long long)arg2 fieldType:(id)arg3 resultType:(id)arg4 fromBundleId:(id)arg5 targetApp:(id)arg6 linguistic:(_Bool)arg7 semantic:(_Bool)arg8;

@end

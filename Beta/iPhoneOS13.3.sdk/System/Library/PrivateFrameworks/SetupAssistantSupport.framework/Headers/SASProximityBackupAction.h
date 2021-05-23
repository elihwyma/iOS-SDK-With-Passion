/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
 */

#import <SetupAssistantSupport/SASProximityAction.h>

@class NSDate, NSError;

@interface SASProximityBackupAction : SASProximityAction

{
    _Bool _shouldStartBackup;
    _Bool _finishedBackup;
    NSError *_error;
    double _percentComplete;
    unsigned long long _timeRemaining;
    NSDate *_completionDate;
}

@property _Bool shouldStartBackup;
@property _Bool finishedBackup;
@property (retain) NSError *error;
@property double percentComplete;
@property unsigned long long timeRemaining;
@property (retain) NSDate *completionDate;

+ (unsigned long long)actionID;
+ (id)actionFromDictionary:(id)arg1;

- (id)requestPayload;

@end

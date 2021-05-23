/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSObject.h>

@class AWDServerConnection;

@protocol OS_dispatch_queue;

@interface VMAWDReporter : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    AWDServerConnection *_serverConnection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) AWDServerConnection *serverConnection;

+ (id)sharedInstance;

- (id)init;
- (void)reportVoicemailDownloadedWithDuration:(int)arg1;
- (void)_reportMetricWithID:(unsigned int)arg1 metric:(id)arg2;
- (void)reportServiceAccountStateChanged:(int)arg1;
- (void)reportServiceBeaconMaxedOut;
- (void)reportCustomGreetingSaved;
- (void)reportCustomGreetingFailedWithReason:(unsigned long long)arg1;
- (void)reportVoicemailTranscriptionRatedAccurate:(_Bool)arg1;
- (void)reportVoicemailTranscriptionAttempted;
- (void)reportVoicemailTranscriptionCompleted;
- (void)reportVoicemailTranscriptionFailedWithReason:(unsigned long long)arg1;

@end

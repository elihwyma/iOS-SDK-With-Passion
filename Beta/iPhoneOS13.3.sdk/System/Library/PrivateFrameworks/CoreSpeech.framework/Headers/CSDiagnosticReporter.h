/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class SDRDiagnosticReporter;

@protocol OS_dispatch_queue;

@interface CSDiagnosticReporter : NSObject

{
    SDRDiagnosticReporter *_reporter;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) SDRDiagnosticReporter *reporter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (id)init;
- (void)submitDiagnosticReportWithType:(id)arg1 withSubType:(id)arg2 withContext:(id)arg3;

@end

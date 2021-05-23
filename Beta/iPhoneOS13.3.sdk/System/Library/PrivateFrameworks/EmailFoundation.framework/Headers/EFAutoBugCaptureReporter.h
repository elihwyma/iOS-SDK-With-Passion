/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, SDRDiagnosticReporter;

@interface EFAutoBugCaptureReporter : NSObject

{
    SDRDiagnosticReporter *_diagnosticReporter;
}

@property (retain, nonatomic) SDRDiagnosticReporter *diagnosticReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)sharedReporter;

- (id)init;
- (void)reportIssueType:(id)arg1 description:(id)arg2;

@end

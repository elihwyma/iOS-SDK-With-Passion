/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
 */

#import <SoftwareUpdateServices/SUOperationProgress.h>

@interface SUSUIFakeSUOperationProgress : SUOperationProgress

- (float)percentComplete;
- (id)phase;
- (_Bool)isDone;
- (double)timeRemaining;
- (float)normalizedPercentComplete;

@end

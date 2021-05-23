/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <AuthKitUI/AKCAReporter.h>

@interface AKSatoriReport : AKCAReporter

- (id)initWithRequestID:(id)arg1;
- (void)didCompleteWithSuccess:(_Bool)arg1 authorizationAlreadyComplete:(_Bool)arg2;
- (void)didPerformVerificationWithSuccess:(_Bool)arg1 duration:(unsigned long long)arg2;
- (void)didCompleteVerificationWithSuccess:(_Bool)arg1 duration:(unsigned long long)arg2;

@end

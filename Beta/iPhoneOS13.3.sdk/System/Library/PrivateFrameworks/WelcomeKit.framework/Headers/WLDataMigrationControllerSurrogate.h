/*
 Image: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
 */

#import <WelcomeKit/WLDataMigrationController.h>

@interface WLDataMigrationControllerSurrogate : WLDataMigrationController

{
    _Bool _forceDownloadError;
}

- (id)initWithDelegate:(id)arg1;
- (void)startMigrationUsingRetryPolicies:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1 forceDownloadError:(_Bool)arg2;

@end

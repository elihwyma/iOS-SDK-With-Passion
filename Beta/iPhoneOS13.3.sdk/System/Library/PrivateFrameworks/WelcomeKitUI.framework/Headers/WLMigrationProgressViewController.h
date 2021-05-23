/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
 */

#import <WelcomeKitUI/WLWelcomeGroupViewController.h>

@class NSArray, NSDateComponentsFormatter, NSObject, NSString, UIActivityIndicatorView, UILabel, UIProgressView, WLDataMigrationController, WLSourceDevice;

@protocol OS_dispatch_source;

@interface WLMigrationProgressViewController : WLWelcomeGroupViewController

{
    UILabel *_stateView;
    UIActivityIndicatorView *_spinner;
    UILabel *_deviceNameView;
    UIProgressView *_progressView;
    UILabel *_explanationView;
    NSArray *_stateViewConstraintsForWithSpinner;
    NSArray *_stateViewConstraintsForNoSpinner;
    _Bool _usingRetryPolicies;
    WLSourceDevice *_sourceDevice;
    unsigned long long _migrationState;
    WLDataMigrationController *_migrationController;
    _Bool _migrationControllerIsRestartable;
    _Bool _migrationConcluded;
    NSDateComponentsFormatter *_remainingDownloadTimeFormatter;
    double _remainingDownloadTime;
    NSObject<OS_dispatch_source> *_remainingDownloadTimeUpdateTimer;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _migrationDidBeginHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) CDUnknownBlockType migrationDidBeginHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dataMigratorDidGetInterrupted;
- (void)dataMigrator:(id)arg1 didFailWithError:(id)arg2;
- (void)dataMigratorDidBecomeRestartable:(id)arg1;
- (void)dataMigratorDidFinish:(id)arg1 withImportErrors:(_Bool)arg2;
- (void)dataMigrator:(id)arg1 didUpdateMigrationState:(unsigned long long)arg2;
- (void)dataMigrator:(id)arg1 didUpdateProgressPercentage:(float)arg2;
- (void)dataMigrator:(id)arg1 didUpdateRemainingDownloadTime:(double)arg2;
- (void)_startMigration;
- (void)_didCompleteMigrationWithSuccess:(_Bool)arg1 retry:(_Bool)arg2;
- (void)_updateProgressViewsWithOneLineStateKey:(id)arg1 twoLineStateKey:(id)arg2 showDeviceName:(_Bool)arg3 showSpinner:(_Bool)arg4 explanationText:(id)arg5;
- (void)_callClientCompletionWithSuccess:(_Bool)arg1 retry:(_Bool)arg2;
- (id)initWithSourceDevice:(id)arg1 metrics:(id)arg2 usingRetryPolicies:(_Bool)arg3;

@end

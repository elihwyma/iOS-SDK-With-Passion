/*
 Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

#import <UIKit/UIViewController.h>

@class BPSMultipleWatchMigrationView, BPSRemoteWatchView, NSArray, NSString;

@protocol BPSWatchMigrationControllerDelegate;

@interface BPSWatchMigrationController : UIViewController

{
    _Bool _iTunes;
    id <BPSWatchMigrationControllerDelegate> _migrationDelegate;
    BPSRemoteWatchView *_watchView;
    BPSMultipleWatchMigrationView *_multipleWatchView;
    NSString *_sourceDeviceName;
    NSArray *_migratableDevices;
}

@property (retain, nonatomic) BPSRemoteWatchView *watchView;
@property (retain, nonatomic) BPSMultipleWatchMigrationView *multipleWatchView;
@property (retain, nonatomic) NSString *sourceDeviceName;
@property (retain, nonatomic) NSArray *migratableDevices;
@property (nonatomic) _Bool iTunes;
@property (weak, nonatomic) id <BPSWatchMigrationControllerDelegate> migrationDelegate;

- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSnapshot:(id)arg1;
- (id)initWithSourceDeviceName:(id)arg1;
- (void)_notifyDelegateShouldMigrateWithData:(id)arg1;
- (void)_saveMigrationPreference:(_Bool)arg1;
- (_Bool)shouldBeDisplayedGivenMigrationData:(id)arg1;

@end

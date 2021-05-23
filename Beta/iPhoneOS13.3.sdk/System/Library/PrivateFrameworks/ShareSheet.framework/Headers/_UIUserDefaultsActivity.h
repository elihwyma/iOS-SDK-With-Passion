/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <ShareSheet/UIActivity.h>

@class NSArray, UIViewController, _UIActivityUserDefaults;

@interface _UIUserDefaultsActivity : UIActivity

{
    NSArray *_availableActivities;
    _UIActivityUserDefaults *_userDefaults;
    UIViewController *_presentableActivityViewController;
    long long _activityCategory;
}

@property (retain, nonatomic) _UIActivityUserDefaults *userDefaults;
@property (retain, nonatomic) UIViewController *presentableActivityViewController;
@property (nonatomic) long long activityCategory;
@property (copy, nonatomic) NSArray *availableActivities;

- (id)activityType;
- (void)_cleanup;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_activityImage;
- (id)activityViewController;
- (void)activityDidFinish:(_Bool)arg1 items:(id)arg2 error:(id)arg3;
- (id)_actionImage;
- (void)_prepareActivityViewControllerIfNeeded;
- (void)_settingsViewControllerDidDismiss:(id)arg1;
- (id)initWithUserDefaults:(id)arg1 activityCategory:(long long)arg2;

@end

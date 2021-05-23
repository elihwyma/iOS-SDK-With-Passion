/*
 Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

#import <UIKit/UIViewController.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface FMViewController : UIViewController

{
    NSMutableDictionary *_kvoObservationTokens;
    NSMutableSet *_notificationTokens;
}

@property (retain, nonatomic) NSMutableDictionary *kvoObservationTokens;
@property (retain, nonatomic) NSMutableSet *notificationTokens;
@property (copy, readonly) NSString *controllerNibName;

- (id)init;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)awakeFromNib;
- (void)didReceiveMemoryWarning;
- (void)performSegueWithIdentifier:(id)arg1 sender:(id)arg2;
- (void)removeKVOObservationTokens;
- (void)removeNotificationTokens;
- (void)addKVOObservationToken:(id)arg1 forObject:(id)arg2;
- (void)addNotificationToken:(id)arg1;
- (id)actualNibNameForName:(id)arg1;

@end

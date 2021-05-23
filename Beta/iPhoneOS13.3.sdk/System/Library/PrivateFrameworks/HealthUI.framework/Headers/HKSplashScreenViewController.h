/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKViewController.h>

@class HKSplashScreenView, NSMutableArray, NSString, UIButton;

@interface HKSplashScreenViewController : HKViewController

{
    NSMutableArray *_splashItems;
    long long _splashVersion;
}

@property (nonatomic, readonly) HKSplashScreenView *splashScreenView;
@property (retain, nonatomic) NSMutableArray *splashItems;
@property (nonatomic) long long splashVersion;
@property (readonly) UIButton *continueButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)markSplashScreenAtVersion:(long long)arg1;
+ (id)splashScreenForSplashScreenVersion:(long long)arg1;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)initForSplashScreenVersion:(long long)arg1;
- (void)addSplashScreenViewControllerItem:(id)arg1;

@end

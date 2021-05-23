/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/AssistantSubUIViewController.h>

@class NSString, PPPoEConnectionUIViewController, UILabel, UIView;

@interface PPPoEViewController : AssistantSubUIViewController

{
    UIView *tableHeaderContainerView;
    UIView *justTextContainerView;
    UILabel *justTextLabel;
    PPPoEConnectionUIViewController *pppoeConnectionUIViewController;
    id previousNavDelegate;
}

@property (retain, nonatomic) UIView *tableHeaderContainerView;
@property (retain, nonatomic) UIView *justTextContainerView;
@property (nonatomic) UILabel *justTextLabel;
@property (retain) PPPoEConnectionUIViewController *pppoeConnectionUIViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)touchInCellAtIndexPath:(id)arg1;
- (_Bool)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4;
- (id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned long long)arg2 inCellWithTag:(long long)arg3;
- (void)setupInitialTableHeaderConfiguration;

@end

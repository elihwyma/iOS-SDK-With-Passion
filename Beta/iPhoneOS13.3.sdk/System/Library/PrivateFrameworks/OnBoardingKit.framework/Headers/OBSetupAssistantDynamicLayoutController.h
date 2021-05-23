/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <UIKit/UIViewController.h>

@class NSString, OBWelcomeController, UIImage, UIView;

@interface OBSetupAssistantDynamicLayoutController : UIViewController

{
    _Bool _enableStickyHeader;
    OBWelcomeController *_backingController;
    CDUnknownBlockType _constraintForLayoutFactory;
    UIView *_mainContentSubview;
    UIView *_outerContentView;
    NSString *_localTitle;
    NSString *_localDetailText;
    UIImage *_localImage;
}

@property (retain, nonatomic) OBWelcomeController *backingController;
@property (copy, nonatomic) CDUnknownBlockType constraintForLayoutFactory;
@property (retain, nonatomic) UIView *mainContentSubview;
@property (retain, nonatomic) UIView *outerContentView;
@property (copy, nonatomic) NSString *localTitle;
@property (copy, nonatomic) NSString *localDetailText;
@property (retain, nonatomic) UIImage *localImage;
@property (nonatomic) _Bool enableStickyHeader;

- (id)contentView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)headerView;
- (long long)contentViewLayout;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)buttonTray;
- (void)_updateScrollUnderLayout;
- (void)_relayoutContentSubviewIfNeeded;
- (void)addContentSubView:(id)arg1 heightConstraintForLayout:(CDUnknownBlockType)arg2;
- (void)resetLayoutTo:(long long)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class NSArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface UICandidateViewController : UIViewController

{
    UIView *_candidateView;
}

@property (retain, nonatomic) UIView *candidateView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *displayedCandidates;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (long long)overrideUserInterfaceStyle;
- (_Bool)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;
- (_Bool)hidesExpandableButton;

@end

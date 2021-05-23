/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class NSArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface UICompatibilityPredictiveViewController : UIViewController

{
    UIView *_customView;
}

@property (retain, nonatomic) UIView *customView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *displayedCandidates;

- (void)viewDidLayoutSubviews;
- (_Bool)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;
- (_Bool)hidesExpandableButton;

@end

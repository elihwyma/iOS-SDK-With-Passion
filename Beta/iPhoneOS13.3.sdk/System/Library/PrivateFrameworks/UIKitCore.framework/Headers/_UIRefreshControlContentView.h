/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSAttributedString, UIColor, UIImpactFeedbackGenerator, UIRefreshControl;

__attribute__((visibility("hidden")))
@interface _UIRefreshControlContentView : UIView

{
    UIRefreshControl *_refreshControl;
    UIColor *_tintColor;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
}

@property (nonatomic, readonly) long long style;
@property (nonatomic) UIRefreshControl *refreshControl;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) NSAttributedString *attributedTitle;
@property (nonatomic, readonly) double minimumSnappingHeight;
@property (nonatomic, readonly) double maximumSnappingHeight;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;

- (void)refreshControlInvalidatedSnappingHeight;
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (void)willTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (void)didTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (void)_removeAllAnimations;

@end

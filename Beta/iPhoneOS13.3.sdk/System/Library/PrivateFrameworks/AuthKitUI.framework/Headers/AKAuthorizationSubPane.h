/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <Foundation/NSObject.h>

@class UIView, UIViewController;

@interface AKAuthorizationSubPane : NSObject

{
    UIViewController *_viewController;
    UIView *_internalView;
    double _internalCustomSpacingAfter;
}

@property (nonatomic, readonly) UIView *internalView;
@property (nonatomic) double internalCustomSpacingAfter;
@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic) double customSpacingAfter;

- (id)initWithView:(id)arg1;
- (id)initWithViewController:(id)arg1;
- (void)addToStackView:(id)arg1 context:(id)arg2;
- (void)addToConstraints:(id)arg1 context:(id)arg2;

@end

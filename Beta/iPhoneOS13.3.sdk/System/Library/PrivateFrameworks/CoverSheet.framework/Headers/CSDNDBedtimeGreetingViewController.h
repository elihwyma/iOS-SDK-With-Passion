/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSModalViewControllerBase.h>

@class CLInUseAssertion, NSString, UIColor;

@protocol CSDNDBedtimeGreetingDelegate;

@interface CSDNDBedtimeGreetingViewController : CSModalViewControllerBase

{
    UIColor *_legibilityPrimaryColor;
    CLInUseAssertion *_weatherInUseAssertion;
    id <CSDNDBedtimeGreetingDelegate> _delegate;
}

@property (weak, nonatomic) id <CSDNDBedtimeGreetingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)aggregateAppearance:(id)arg1;
- (void)handleSecondaryActionForView:(id)arg1;
- (id)initWithLegibilityPrimaryColor:(id)arg1;
- (void)handleTouchEventForView:(id)arg1;
- (id)_greetingString;

@end

/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class SUViewController;

@interface SURotationController : NSObject

{
    SUViewController *_viewController;
}

@property (nonatomic) SUViewController *viewController;

- (id)init;
- (void)dealloc;
- (id)initWithViewController:(id)arg1;
- (void)finishRotationFromInterfaceOrientation:(long long)arg1;
- (void)animateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)prepareToRotateToInterfaceOrientation:(long long)arg1;
- (struct CGRect)viewFrameForInterfaceOrientation:(long long)arg1;
- (_Bool)orientationAffectsViewFrame;

@end

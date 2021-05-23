/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SearchUIConfirmationHUDTransitionController : NSObject

{
    _Bool _presenting;
}

@property (nonatomic, getter=isPresenting) _Bool presenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;

@end

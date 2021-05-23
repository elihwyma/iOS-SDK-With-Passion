/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIView;

@interface _TVRMAlertControllerTransitioning : NSObject

{
    _Bool _isPresentation;
    UIView *_contentView;
    UIView *_dimmingView;
}

@property (nonatomic) _Bool isPresentation;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *dimmingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;

@end

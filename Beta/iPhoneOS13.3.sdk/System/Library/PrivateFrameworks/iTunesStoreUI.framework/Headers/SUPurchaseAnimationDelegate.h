/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class UIView;

@interface SUPurchaseAnimationDelegate : NSObject

{
    UIView *_view;
}

- (void)dealloc;
- (id)initWithView:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class UIView;

@interface SXQuickLookTransitionContext : NSObject

{
    UIView *_originView;
}

@property (nonatomic, readonly) UIView *originView;

- (id)initWithOriginView:(id)arg1;

@end

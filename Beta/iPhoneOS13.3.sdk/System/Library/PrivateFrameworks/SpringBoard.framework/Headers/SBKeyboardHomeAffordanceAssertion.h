/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class UIWindow;

@interface SBKeyboardHomeAffordanceAssertion : NSObject

{
    double _additionalEdgeMargin;
    UIWindow *_sourceWindow;
}

@property (weak, nonatomic) UIWindow *sourceWindow;
@property (nonatomic) double additionalEdgeMargin;

+ (id)assertionForGestureWindow:(id)arg1;

- (void)dealloc;
- (void)invalidate;
- (id)initWithGestureWindow:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <FrontBoard/BSSimpleAssertion.h>

@interface SBAsynchronousRenderingAssertion : BSSimpleAssertion

{
    _Bool _wantsMinificationFilter;
}

@property (nonatomic) _Bool wantsMinificationFilter;

- (id)initWithReason:(id)arg1;
- (id)initWithReason:(id)arg1 wantsMinificationFilter:(_Bool)arg2;

@end

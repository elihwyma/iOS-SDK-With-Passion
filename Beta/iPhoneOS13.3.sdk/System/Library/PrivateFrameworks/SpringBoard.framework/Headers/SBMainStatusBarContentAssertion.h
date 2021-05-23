/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <FrontBoard/BSSimpleAssertion.h>

@interface SBMainStatusBarContentAssertion : BSSimpleAssertion

{
    _Bool _animated;
    _Bool _dateAndTimeVisible;
    double _duration;
}

@property (nonatomic) _Bool animated;
@property (nonatomic) double duration;
@property (nonatomic) _Bool dateAndTimeVisible;

- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2;

@end

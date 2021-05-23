/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <FrontBoard/BSSimpleAssertion.h>

@class NSSet;

@interface SBDisableSystemGestureAssertion : BSSimpleAssertion

{
    NSSet *_exceptions;
}

@property (retain, nonatomic) NSSet *exceptions;

@end

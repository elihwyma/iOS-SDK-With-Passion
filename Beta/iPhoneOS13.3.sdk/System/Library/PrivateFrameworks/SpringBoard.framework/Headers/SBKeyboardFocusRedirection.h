/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <FrontBoard/BSSimpleAssertion.h>

@class BKSHIDEventDeferringToken;

@interface SBKeyboardFocusRedirection : BSSimpleAssertion

{
    int _fromProcessIdentifier;
    int _toProcessIdentifier;
    BKSHIDEventDeferringToken *_fromToken;
    BKSHIDEventDeferringToken *_toToken;
}

@property (nonatomic) int fromProcessIdentifier;
@property (copy, nonatomic) BKSHIDEventDeferringToken *fromToken;
@property (nonatomic) int toProcessIdentifier;
@property (copy, nonatomic) BKSHIDEventDeferringToken *toToken;

- (id)description;

@end

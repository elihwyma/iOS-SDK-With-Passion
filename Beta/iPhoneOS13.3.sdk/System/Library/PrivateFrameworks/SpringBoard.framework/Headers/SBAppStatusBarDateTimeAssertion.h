/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <FrontBoard/BSSimpleAssertion.h>

@class UIStatusBar;

@interface SBAppStatusBarDateTimeAssertion : BSSimpleAssertion

{
    _Bool _dateTimeHidden;
    UIStatusBar *_statusBar;
}

@property (retain, nonatomic) UIStatusBar *statusBar;
@property (nonatomic, getter=isDateTimeHidden) _Bool dateTimeHidden;

- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2;

@end

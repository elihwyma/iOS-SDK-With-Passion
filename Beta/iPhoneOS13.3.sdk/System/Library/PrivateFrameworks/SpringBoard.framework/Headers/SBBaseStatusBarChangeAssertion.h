/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBBaseStatusBarChangeAssertion : NSObject

{
    NSString *_reason;
}

@property (copy, nonatomic, readonly) NSString *reason;

- (id)init;
- (id)description;
- (void)invalidate;
- (id)_initWithReason:(id)arg1;

@end

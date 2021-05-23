/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBAttentionAwareIdleTimerTimeoutContext : NSObject

{
    long long _expectation;
}

@property (nonatomic, readonly) long long expectation;

- (id)description;
- (id)initWithExpectation:(long long)arg1;

@end

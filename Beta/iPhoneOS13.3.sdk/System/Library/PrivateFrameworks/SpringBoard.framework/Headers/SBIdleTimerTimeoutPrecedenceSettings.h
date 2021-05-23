/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@interface SBIdleTimerTimeoutPrecedenceSettings : NSObject <Swift>

{
    double _normalTimeout;
    double _highTimeout;
    double _criticalTimeout;
}

@property (nonatomic, readonly) double normalTimeout;
@property (nonatomic, readonly) double highTimeout;
@property (nonatomic, readonly) double criticalTimeout;
@property (nonatomic, readonly) unsigned long long highestPrecedence;
@property (nonatomic, readonly) double leastTimeout;
@property (nonatomic, readonly) double greatestTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_setTimeout:(double)arg1 withPrecedence:(unsigned long long)arg2;
- (void)_setTimeout:(double)arg1 ifGreatestForPrecedence:(unsigned long long)arg2;
- (void)_setTimeout:(double)arg1 ifLeastForPrecedence:(unsigned long long)arg2;
- (double)_intervalForPrecedence:(unsigned long long)arg1;

@end

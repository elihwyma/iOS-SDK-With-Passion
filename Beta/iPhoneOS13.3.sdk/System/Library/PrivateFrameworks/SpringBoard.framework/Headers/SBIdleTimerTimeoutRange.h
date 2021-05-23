/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@interface SBIdleTimerTimeoutRange : NSObject <Swift>

{
    double _lowerTimeout;
    double _upperTimeout;
}

@property (nonatomic, readonly) double lowerTimeout;
@property (nonatomic, readonly) double upperTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)intersects:(id)arg1;
- (id)initWithLowerTimeout:(double)arg1 upperTimeout:(double)arg2;
- (id)clippedRangeWithFavoredRange:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBPearlMatchingStateProviderDelegate;

@protocol SBPearlMatchingStateProvider <Swift>

@property (weak, nonatomic) id <SBPearlMatchingStateProviderDelegate> delegate;
@property (nonatomic, readonly) _Bool pearlMatchEnabledAndPossible;
@property (nonatomic, readonly) _Bool seenMatchResultSinceScreenOn;

- (unsigned short)reset;

@end

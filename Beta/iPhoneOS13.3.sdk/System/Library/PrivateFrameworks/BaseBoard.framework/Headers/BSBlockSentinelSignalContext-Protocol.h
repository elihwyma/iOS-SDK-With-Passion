/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <BaseBoard/Swift-Protocol.h>

@protocol BSBlockSentinelSignalContext <Swift>

@property (nonatomic, readonly, getter=isComplete) _Bool complete;
@property (nonatomic, readonly, getter=isFailed) _Bool failed;
@property (nonatomic, readonly) id context;

@end

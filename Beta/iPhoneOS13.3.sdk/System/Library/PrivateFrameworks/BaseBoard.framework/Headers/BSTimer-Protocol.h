/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <BaseBoard/Swift-Protocol.h>

@protocol BSTimer <Swift>

@property (nonatomic, readonly, getter=isScheduled) _Bool scheduled;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) double fireInterval;

+ (unsigned short)scheduledTimerWithFireInterval:queue:handler: /* Error: Ran out of types for this method. */;

- (unsigned short)cancel;
- (unsigned short)initWithFireInterval:queue:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)schedule;

@end

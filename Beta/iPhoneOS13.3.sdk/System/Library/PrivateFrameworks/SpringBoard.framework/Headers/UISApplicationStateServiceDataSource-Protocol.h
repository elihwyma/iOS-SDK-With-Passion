/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class NSDate;

@protocol UISApplicationStateServiceDataSource <Swift>

@property (nonatomic) _Bool usesBackgroundNetwork;
@property (copy, nonatomic) id badgeValue;
@property (retain, nonatomic) NSDate *nextWakeDate;

@end

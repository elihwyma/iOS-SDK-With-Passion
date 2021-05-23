/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@protocol SBMainDisplayInterfaceOrientationSource <Swift>

@property (nonatomic, readonly) long long activeInterfaceOrientation;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic, readonly) double orientationSourceLevel;
@property (copy, nonatomic, readonly) NSString *orientationSourceDescription;

@end

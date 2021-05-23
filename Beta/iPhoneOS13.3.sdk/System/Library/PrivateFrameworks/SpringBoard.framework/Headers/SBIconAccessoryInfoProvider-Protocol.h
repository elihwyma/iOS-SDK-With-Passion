/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@protocol SBIconAccessoryInfoProvider <Swift>

@property (copy, nonatomic, readonly) NSString *location;
@property (nonatomic, readonly, getter=isHighlighted) _Bool highlighted;
@property (nonatomic, readonly) long long continuityBadgeType;

@end

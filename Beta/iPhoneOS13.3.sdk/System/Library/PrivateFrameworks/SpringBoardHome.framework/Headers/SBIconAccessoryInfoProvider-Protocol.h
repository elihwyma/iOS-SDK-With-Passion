/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/Swift-Protocol.h>

@class NSString;

@protocol SBIconAccessoryInfoProvider <Swift>

@property (copy, nonatomic, readonly) NSString *location;
@property (nonatomic, readonly, getter=isHighlighted) _Bool highlighted;
@property (nonatomic, readonly) long long continuityBadgeType;

@end

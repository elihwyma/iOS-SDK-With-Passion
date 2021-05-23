/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBAppSwitcherPageContentView <Swift>

@property (nonatomic) double cornerRadius;
@property (nonatomic) long long orientation;
@property (nonatomic, readonly) _Bool contentRequiresGroupOpacity;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, getter=isVisible) _Bool visible;

- (unsigned short)invalidate;

@end

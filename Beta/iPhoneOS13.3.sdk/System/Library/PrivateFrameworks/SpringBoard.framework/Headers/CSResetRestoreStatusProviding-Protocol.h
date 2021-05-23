/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol CSResetRestoreStatusProviding <Swift>

@property (nonatomic, readonly, getter=isRestoring) _Bool restoring;
@property (nonatomic, readonly) long long restoreState;
@property (nonatomic, readonly, getter=isResetting) _Bool resetting;
@property (nonatomic, readonly) long long resetState;

@end

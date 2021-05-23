/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@protocol CSUnlockRequest <Swift>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) int source;
@property (nonatomic) int intent;
@property (nonatomic) _Bool wantsBiometricPresentation;
@property (nonatomic) _Bool confirmedNotInPocket;

@end

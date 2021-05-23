/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol CSPowerStatusProviding <Swift>

@property (nonatomic, readonly, getter=isOnAC) _Bool onAC;
@property (nonatomic, readonly, getter=isConnectedToExternalChargingSource) _Bool connectedToExternalChargingSource;

@end

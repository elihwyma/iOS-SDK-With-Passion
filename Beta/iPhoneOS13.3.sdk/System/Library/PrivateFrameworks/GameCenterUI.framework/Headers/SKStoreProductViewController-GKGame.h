/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <StoreKit/SKStoreProductViewController.h>

@class GKGame;

@interface SKStoreProductViewController (GKGame)

@property (retain, nonatomic) GKGame *_gkGame;
@property (copy, nonatomic) CDUnknownBlockType _gkCompletionHandler;

@end

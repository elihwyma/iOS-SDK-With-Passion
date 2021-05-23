/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/Swift-Protocol.h>

@protocol GKGameModel, GKRandom;

@protocol GKStrategist <Swift>

@property (retain, nonatomic) id <GKGameModel> gameModel;
@property (retain, nonatomic) id <GKRandom> randomSource;

- (unsigned short)bestMoveForActivePlayer;

@end

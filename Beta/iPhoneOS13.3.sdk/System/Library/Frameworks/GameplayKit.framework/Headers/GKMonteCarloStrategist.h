/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol GKGameModel, GKRandom;

@interface GKMonteCarloStrategist : NSObject

{
    struct GKCMonteCarloStrategist *_monteCarloStrategist;
}

@property (nonatomic) unsigned long long budget;
@property (nonatomic) unsigned long long explorationParameter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id <GKGameModel> gameModel;
@property (retain, nonatomic) id <GKRandom> randomSource;

- (id)init;
- (void)dealloc;
- (id)bestMoveForActivePlayer;
- (_Bool)validateGameModel:(id)arg1;

@end

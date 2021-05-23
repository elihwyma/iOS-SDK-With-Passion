/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol GKGameModel, GKRandom;

__attribute__((visibility("hidden")))
@interface GKHybridStrategist : NSObject

{
    struct GKCHybridStrategist *_hybridStrategist;
}

@property (nonatomic) unsigned long long budget;
@property (nonatomic) unsigned long long explorationParameter;
@property (nonatomic) unsigned long long maxLookAheadDepth;
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
- (_Bool)validateRandomSource;

@end

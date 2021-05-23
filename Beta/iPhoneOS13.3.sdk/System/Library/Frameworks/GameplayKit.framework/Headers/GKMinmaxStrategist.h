/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol GKGameModel, GKRandom;

@interface GKMinmaxStrategist : NSObject

{
    struct GKCMinmaxStrategist *_cppMinmax;
}

@property (nonatomic) long long maxLookAheadDepth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id <GKGameModel> gameModel;
@property (retain, nonatomic) id <GKRandom> randomSource;

- (id)init;
- (void)dealloc;
- (id)bestMoveForActivePlayer;
- (id)bestMoveForPlayer:(id)arg1;
- (id)randomMoveForPlayer:(id)arg1 fromNumberOfBestMoves:(long long)arg2;

@end

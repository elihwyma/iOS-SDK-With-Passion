/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class MiroAutoEditKenBurnsController, MiroAutoEditProjectPolish, MiroMemory, NSArray, NSMutableArray, Project;

__attribute__((visibility("hidden")))
@interface MiroAutoEditMultiUpController : NSObject

{
    Project *_project;
    MiroMemory *_activeMemory;
    NSArray *_chronologicallyOrderedAssets;
    NSArray *_projectLayoutClips;
    NSMutableArray *_selectedPeers;
    MiroAutoEditKenBurnsController *_kbController;
    MiroAutoEditProjectPolish *_polishController;
    unsigned long long _altStyle;
}

@property (retain, nonatomic) Project *project;
@property (retain, nonatomic) MiroMemory *activeMemory;
@property (retain, nonatomic) NSArray *chronologicallyOrderedAssets;
@property (nonatomic) NSArray *projectLayoutClips;
@property (retain, nonatomic) NSMutableArray *selectedPeers;
@property (retain, nonatomic) MiroAutoEditKenBurnsController *kbController;
@property (retain, nonatomic) MiroAutoEditProjectPolish *polishController;
@property (nonatomic) unsigned long long altStyle;

- (id)bestPeersBetweenClip:(id)arg1 and:(id)arg2 withCurrent:(id)arg3;
- (_Bool)clipIsMultiCandidate:(id)arg1;
- (id)appropriateDistancePeersFrom:(id)arg1 comparingTo:(id)arg2;
- (id)selectLayoutPeerFrom:(id)arg1;
- (int)multiUpTypeForLayoutClip:(id)arg1 andPeer:(id)arg2;
- (void)prepareAltClip:(id)arg1 andClip:(id)arg2 fromSelectedPeer:(id)arg3 forAspect:(double)arg4;
- (void)adjustKBRectanglesForClip:(id)arg1 animationStyle:(unsigned long long)arg2 aspect:(double)arg3;
- (_Bool)selectedPeersContains:(id)arg1;
- (id)allowedAssetsChronologically;
- (id)pickBetweenClipA:(id)arg1 andClipB:(id)arg2 forLayoutClip:(id)arg3;
- (_Bool)findMultiUpPeers:(id)arg1 forLayoutClip:(id)arg2;
- (void)evaluatePossilbeInEditMultiUpPeers:(id)arg1 forLayoutClip:(id)arg2;
- (void)createAndReplaceMultiUpForLayoutClip:(id)arg1;
- (void)ensureMultiUpMovieClipIsFirstClip:(id)arg1;
- (_Bool)peer:(id)arg1 couldSupportAsset:(id)arg2;
- (_Bool)layoutClip:(id)arg1 supportsMultiUpType:(int)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSSet;

@interface PGPotentialEarlyMomentsWithPeopleMemory : PGPotentialMemory
{
    NSSet *_personNodes;
    NSArray *_facedAssets;
}

@property(retain, nonatomic) NSArray *facedAssets; // @synthesize facedAssets=_facedAssets;
@property(readonly, nonatomic) NSSet *personNodes; // @synthesize personNodes=_personNodes;
// - (void).cxx_destruct;
- (id)initWithMomentNodes:(id)arg1 personNodes:(id)arg2;

@end


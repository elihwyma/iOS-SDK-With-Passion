//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SUICGLIndexCacheEntry : NSObject
{
    unsigned int _numAuraIndices;
    unsigned int _numAuraIndicesCulled;
    unsigned int _numWaveIndices;
    unsigned int _gl_indices;
}

@property(nonatomic) unsigned int gl_indices; // @synthesize gl_indices=_gl_indices;
@property(nonatomic) unsigned int numWaveIndices; // @synthesize numWaveIndices=_numWaveIndices;
@property(nonatomic) unsigned int numAuraIndicesCulled; // @synthesize numAuraIndicesCulled=_numAuraIndicesCulled;
@property(nonatomic) unsigned int numAuraIndices; // @synthesize numAuraIndices=_numAuraIndices;
- (void)dealloc;

@end


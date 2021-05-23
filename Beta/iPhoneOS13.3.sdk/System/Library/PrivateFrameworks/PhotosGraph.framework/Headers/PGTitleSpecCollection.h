/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PGTitleSpecCollection : NSObject

{
    NSArray *_specPools;
}

@property (nonatomic, readonly) NSArray *specPools;

+ (id)collectionWithSpecPools:(id)arg1;

- (id)description;
- (id)initWithSpecPools:(id)arg1;
- (id)allPossibleTitlesWithMomentNodes:(id)arg1;
- (id)allPossibleTitlesWithHighlightMomentNodes:(id)arg1;
- (id)_allPossibleTitlesWithMomentNodes:(id)arg1 forHighlight:(_Bool)arg2;

@end

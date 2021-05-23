/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGCurationTrait.h>

@class NSDictionary, NSIndexSet;

@interface PGCurationIndexSetTrait : PGCurationTrait

{
    NSIndexSet *_indexSet;
    NSDictionary *_thresholdByIdentifier;
    unsigned long long _targetNumberOfMatches;
}

@property (retain, nonatomic) NSDictionary *thresholdByIdentifier;
@property (nonatomic, readonly) NSIndexSet *indexSet;
@property (nonatomic) unsigned long long targetNumberOfMatches;

- (id)debugDescription;
- (_Bool)isActive;
- (id)initWithIndexSet:(id)arg1;
- (id)niceDescription;
- (double)thresholdForSceneIdentifier:(unsigned int)arg1;

@end

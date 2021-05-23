/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class PGMeaningfulEventRequiredCriteria;

@interface PGMeaningfulEventMatchingResult : NSObject

{
    _Bool _isMatching;
    _Bool _isReliable;
    double _score;
    PGMeaningfulEventRequiredCriteria *_requiredCriteria;
}

@property (nonatomic, readonly) _Bool isMatching;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) _Bool isReliable;
@property (nonatomic, readonly) PGMeaningfulEventRequiredCriteria *requiredCriteria;

- (id)description;
- (id)initWithIsMatching:(_Bool)arg1 score:(double)arg2 isReliable:(_Bool)arg3 requiredCriteria:(id)arg4;

@end

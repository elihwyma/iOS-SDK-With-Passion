/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface PGCurationOptions : NSObject

{
    _Bool _includesAllFaces;
    _Bool _semanticalDedupingEnabled;
    _Bool _semanticalDedupingUsesAdaptiveSimilarStacking;
    _Bool _movieDedupingEnabled;
    _Bool _lastPassMovieAdditionEnabled;
    _Bool _focusOnPeople;
    _Bool _focusOnInterestingItems;
    unsigned long long _duration;
    unsigned long long _precision;
    long long _cardinalMode;
    NSSet *_uuidsOfRequiredAssets;
}

@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long precision;
@property (nonatomic) _Bool includesAllFaces;
@property (nonatomic) _Bool focusOnPeople;
@property (nonatomic) _Bool focusOnInterestingItems;
@property (nonatomic, getter=semanticalDedupingIsEnabled) _Bool semanticalDedupingEnabled;
@property (nonatomic) _Bool semanticalDedupingUsesAdaptiveSimilarStacking;
@property (nonatomic, getter=movieDedupingIsEnabled) _Bool movieDedupingEnabled;
@property (nonatomic, getter=lastPassMovieAdditionIsEnabled) _Bool lastPassMovieAdditionEnabled;
@property (nonatomic) long long cardinalMode;
@property (copy, nonatomic) NSSet *uuidsOfRequiredAssets;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithDuration:(unsigned long long)arg1 precision:(unsigned long long)arg2;

@end

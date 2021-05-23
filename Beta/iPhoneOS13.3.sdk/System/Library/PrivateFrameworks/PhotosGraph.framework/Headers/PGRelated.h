/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString, PGGraphNode, PHPhotosHighlight;

@protocol PGGraphRelatableEvent;

@interface PGRelated : NSObject

{
    _Bool _generateTitleBasedOnKeyAsset;
    _Bool _shouldGenerateTitle;
    unsigned int _aggregatedVersions;
    NSString *_debugDescription;
    PHPhotosHighlight *_highlight;
    NSArray *_moments;
    NSDictionary *_keywords;
    double _score;
    double _matchingScore;
    NSString *_title;
    NSString *_subtitle;
    long long _titleCategory;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
    unsigned long long _memoryTripTitleType;
    long long _dateMatchingType;
    PGGraphNode<PGGraphRelatableEvent> *_eventNode;
}

@property (retain, nonatomic) PGGraphNode<PGGraphRelatableEvent> *eventNode;
@property (retain, nonatomic) PHPhotosHighlight *highlight;
@property (retain, nonatomic) NSArray *moments;
@property (retain, nonatomic) NSString *debugDescription;
@property (nonatomic) double score;
@property (nonatomic) double matchingScore;
@property (nonatomic) long long titleCategory;
@property (nonatomic) long long dateMatchingType;
@property (nonatomic) unsigned long long memoryTripTitleType;
@property (nonatomic, getter=isGeneratingTitleBasedOnKeyAsset) _Bool generateTitleBasedOnKeyAsset;
@property (nonatomic) _Bool shouldGenerateTitle;
@property (nonatomic) unsigned short graphSchemaVersion;
@property (nonatomic) unsigned short relatedAlgorithmsVersion;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic, readonly) NSDate *localEndDate;
@property (nonatomic, readonly) NSDictionary *keywords;
@property (nonatomic, readonly) unsigned int aggregatedVersions;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

- (id)_initWithGraphMatchingResult:(id)arg1 highlight:(id)arg2 moments:(id)arg3 needsDebugInfo:(_Bool)arg4;
- (id)initWithGraphMatchingResult:(id)arg1 assetCollection:(id)arg2 needsDebugInfo:(_Bool)arg3;
- (id)initWithGraphMatchingResult:(id)arg1 highlight:(id)arg2 needsDebugInfo:(_Bool)arg3;
- (id)initWithGraphMatchingResult:(id)arg1 moment:(id)arg2 needsDebugInfo:(_Bool)arg3;
- (id)initWithGraphMatchingResult:(id)arg1 moments:(id)arg2 tripMemoryTitleType:(unsigned long long)arg3 tripMomentNodes:(id)arg4 needsDebugInfo:(_Bool)arg5;
- (id)initWithMoment:(id)arg1 needsDebugInfo:(_Bool)arg2;
- (id)initWithHighlight:(id)arg1 needsDebugInfo:(_Bool)arg2;
- (void)_generateTitleWithHighlightNode:(id)arg1 referenceDateInterval:(id)arg2;
- (void)_generateTitleWithMomentNodes:(id)arg1 keyAsset:(id)arg2 referenceDateInterval:(id)arg3;
- (void)_addKeywordsFromKeywords:(id)arg1;
- (void)_addKeywords:(id)arg1 forRelatedType:(unsigned long long)arg2;

@end

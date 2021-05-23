/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class CLSInvestigationPhotoKitFeeder, NSArray, NSSet, NSString, PGGraphHighlightNode;

@protocol PGHighlightModel;

@interface PGHighlightTailorContext : NSObject

{
    _Bool _babyIsPresent;
    _Bool _petIsPresent;
    id <PGHighlightModel> _highlight;
    PGGraphHighlightNode *_highlightNode;
    NSSet *_meaningLabels;
    NSSet *_momentNodes;
    CLSInvestigationPhotoKitFeeder *_feeder;
    NSString *_keyAssetUUID;
    double _promotionScore;
    unsigned long long numberOfExtendedAssets;
    NSArray *_childHighlights;
    NSSet *_verifiedPersonLocalIdentifiers;
}

@property (retain, nonatomic) NSSet *meaningLabels;
@property (nonatomic, readonly) id <PGHighlightModel> highlight;
@property (nonatomic, readonly) PGGraphHighlightNode *highlightNode;
@property (nonatomic, readonly) NSSet *momentNodes;
@property (nonatomic, readonly) _Bool babyIsPresent;
@property (nonatomic, readonly) _Bool petIsPresent;
@property (nonatomic, readonly) CLSInvestigationPhotoKitFeeder *feeder;
@property (nonatomic) double promotionScore;
@property (nonatomic) unsigned long long numberOfExtendedAssets;
@property (retain, nonatomic) NSArray *childHighlights;
@property (retain, nonatomic) NSSet *verifiedPersonLocalIdentifiers;
@property (copy, nonatomic) NSString *keyAssetUUID;

- (id)initWithHighlight:(id)arg1 forManager:(id)arg2;
- (id)initForTestingWithHighlight:(id)arg1;

@end

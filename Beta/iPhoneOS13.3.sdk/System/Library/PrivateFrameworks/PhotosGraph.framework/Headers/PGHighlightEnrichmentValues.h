/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMapTable, NSString, PHAsset;

@protocol PGHighlightModel;

@interface PGHighlightEnrichmentValues : NSObject

{
    _Bool _clearCurations;
    unsigned short _enrichmentState;
    id <PGHighlightModel> _highlight;
    double _promotionScore;
    NSString *_smartDescription;
    NSString *_dateDescription;
    NSString *_verboseSmartDescription;
    PHAsset *_keyAsset;
    NSArray *_extendedCuration;
    NSDictionary *_curatedAssetsByCurationType;
    NSDictionary *_momentTitleByMomentUUID;
    unsigned long long _mood;
    NSMapTable *_visibilityScoreByAsset;
}

@property (readonly) id <PGHighlightModel> highlight;
@property (nonatomic) _Bool clearCurations;
@property (nonatomic) double promotionScore;
@property (copy, nonatomic) NSString *smartDescription;
@property (copy, nonatomic) NSString *dateDescription;
@property (copy, nonatomic) NSString *verboseSmartDescription;
@property (retain, nonatomic) PHAsset *keyAsset;
@property (retain, nonatomic) NSArray *extendedCuration;
@property (retain, nonatomic) NSDictionary *curatedAssetsByCurationType;
@property (retain, nonatomic) NSDictionary *momentTitleByMomentUUID;
@property (nonatomic) unsigned long long mood;
@property (retain, nonatomic) NSMapTable *visibilityScoreByAsset;
@property (nonatomic) unsigned short enrichmentState;
@property (readonly) _Bool hasChanges;

- (id)initWithHighlight:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@class NSString;

@protocol PGHighlightModelChangeRequest <Swift>

@property (retain, nonatomic) NSString *dateDescription;
@property (retain, nonatomic) NSString *smartDescription;
@property (retain, nonatomic) NSString *verboseSmartDescription;
@property (nonatomic) double promotionScore;
@property (nonatomic) unsigned long long mood;
@property (nonatomic) unsigned short enrichmentState;

- (unsigned short)setKeyAsset: /* Error: Ran out of types for this method. */;
- (unsigned short)setAssets:forCurationType: /* Error: Ran out of types for this method. */;
- (unsigned short)didEnrichHighlight;
- (unsigned short)clearCurations;
- (unsigned short)enumerateMomentChangeRequestsForUUIDs:inPhotoLibrary:usingBlock: /* Error: Ran out of types for this method. */;

@end

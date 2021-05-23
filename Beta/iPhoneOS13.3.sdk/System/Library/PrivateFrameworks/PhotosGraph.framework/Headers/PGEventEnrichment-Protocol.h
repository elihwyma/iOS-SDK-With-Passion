/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@class NSString;

@protocol PGEventEnrichment <Swift>

@property (nonatomic, readonly) NSString *uuid;
@property (readonly) _Bool isLongTrip;
@property (readonly) _Bool isShortTrip;
@property (readonly) _Bool isTrip;
@property (readonly) _Bool isAggregation;

- (unsigned short)meaningLabels;
- (unsigned short)momentNodes;
- (unsigned short)sortedMomentNodes;
- (unsigned short)fetchAssetCollection;
- (unsigned short)reliableMeaningLabels;
- (unsigned short)birthdayPersonNode;
- (unsigned short)anniversaryPersonNode;

@end

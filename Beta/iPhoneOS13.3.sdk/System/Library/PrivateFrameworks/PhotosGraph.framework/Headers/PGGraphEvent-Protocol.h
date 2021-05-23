/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@class NSDate, NSString, PGGraphHighlightGroupNode;

@protocol PGGraphEvent <Swift>

@property (readonly) NSString *UUID;
@property (readonly) double contentScore;
@property (readonly) NSDate *localStartDate;
@property (readonly) NSDate *localEndDate;
@property (readonly) NSDate *universalStartDate;
@property (readonly) NSDate *universalEndDate;
@property (readonly) _Bool isLongTrip;
@property (readonly) _Bool isShortTrip;
@property (readonly) _Bool isTrip;
@property (readonly) _Bool babyIsPresent;
@property (readonly) _Bool petIsPresent;
@property (readonly) PGGraphHighlightGroupNode *highlightGroupNode;

- (unsigned short)debugDictionary;
- (unsigned short)numberOfAssets;
- (unsigned short)numberOfMoments;
- (unsigned short)momentNodes;
- (unsigned short)eventEnumerateMomentNodesUsingBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)startsAfterLocalDate: /* Error: Ran out of types for this method. */;
- (unsigned short)endsBeforeLocalDate: /* Error: Ran out of types for this method. */;
- (unsigned short)sortedMomentNodes;
- (unsigned short)naturalLanguageFeatures;
- (unsigned short)timedEvent;
- (unsigned short)locatedEvent;
- (unsigned short)peopledEvent;
- (unsigned short)scenedEvent;
- (unsigned short)meaningfulEvent;
- (unsigned short)businessedEvent;
- (unsigned short)enrichableEvent;
- (unsigned short)relatableEvent;

@end

/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@protocol SXAdvertisementPlacementType, SXSuggestedArticlesPlacementType;

@protocol SXAutoPlacement <Swift>

@property (nonatomic, readonly) id <SXAdvertisementPlacementType> advertisement;
@property (nonatomic, readonly) id <SXSuggestedArticlesPlacementType> suggestedArticles;

@end

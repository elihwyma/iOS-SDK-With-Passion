/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXAdvertisementPlacementType, SXSuggestedArticlesPlacementType;

@interface SXResolvedAutoPlacement : NSObject

{
    id <SXAdvertisementPlacementType> _advertisement;
    id <SXSuggestedArticlesPlacementType> _suggestedArticles;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <SXAdvertisementPlacementType> advertisement;
@property (nonatomic, readonly) id <SXSuggestedArticlesPlacementType> suggestedArticles;

- (id)initWithAdvertisement:(id)arg1 suggestedArticles:(id)arg2;

@end
